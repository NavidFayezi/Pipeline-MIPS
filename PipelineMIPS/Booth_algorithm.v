`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:59:56 01/30/2021 
// Design Name: 
// Module Name:    Booth_algorithm 
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
module Booth_algorithm(input clk, start, input signed [15:0] a, b, output reg ready, output reg signed [31:0] result
    );

reg temp;
reg [4:0] step = 0;
parameter [1:0] s0 = 2'b00,
					 s1 = 2'b01,
					 s2 = 2'b10;
reg [1:0] state = s0;
					 
always@(posedge clk or negedge start)
begin
	if(~start)
		begin
		state <= s0;
		end
	else
	begin
	case(state)
		s0:begin
				if(start)
					begin
					step <= 1;
					state <= s1;
					result <= {{16{0}},a};
					temp <= 0;
					ready <= 0;
					end
			end
		s1:begin
				if(step == 5'b10001)
					begin
					state <= s2;
					ready <= 1;
					end
				else
					begin
						step <= step + 1;
						case({result[0],temp})
						2'b00:begin
								result<= result >>> 1;
								temp <= result[0];
								end
								
						2'b01:begin
								result[31:16] = result[31:16] + b;
								temp = result[0];
								result = result >>> 1;
								end
								
						2'b10:begin
								result[31:16] = result[31:16] - b;
								temp = result[0];
								result = result >>> 1;
								end
								
						2'b11:begin
								result<= result >>> 1;
								temp <= result[0];
								end
						endcase
					end
			end
		s2: state <= s2;
	endcase
	end
end
endmodule
