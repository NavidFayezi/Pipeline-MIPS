`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:41:34 01/31/2021 
// Design Name: 
// Module Name:    Division_module 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Division_module(input clk, start, input signed [15:0] divisor, dividend, output reg ready, output [31:0] result
    );

reg [4:0] step;
reg signed [31:0] remainder;
reg signed [31:0] divisor_temp;
reg signed [17:0] quotient;

parameter [1:0] s0 = 2'b00,
					 s1 = 2'b01;
reg [1:0] state = s0;

always@(posedge clk)
begin
	case(state)
	s0:begin
		if(start)
			begin
			remainder <= {{16{0}},dividend};
			divisor_temp <= divisor << 16;
			state <= s1;
			step <= 1;
			ready <= 0;
			quotient <= 0;
			end
		end
	s1:begin
		if(step == 5'b10010)
			begin
			ready <= 1;
			state <= s0;
			end
		else
			begin
			if(remainder < divisor_temp)
				begin 
				divisor_temp <= divisor_temp >>> 1;
				quotient <= quotient << 1;
				step <= step + 1;
				end
			else
				begin
				remainder <= remainder - divisor_temp;
				divisor_temp <= divisor_temp >>> 1;
				quotient <= (quotient << 1) + 1;
				step <= step + 1;
				end
			end
		end
	endcase
end

assign result = {quotient[15:0],remainder[15:0]};

endmodule
