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
wire [15:0] add_sub_res;
wire [1:0] booth_op;
adder_sub add_sub (
    .booth_op(booth_op), 
    .a(result[31:16]), 
    .b(b), 
    .c(add_sub_res)
    );
booth_cu instance_name (
    .L(temp), 
    .lsb(result[0]), 
    .booth_op(booth_op)
    );	 
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
						result[31:16] = add_sub_res;
						temp = result[0];
						result = result >>> 1;
					end
			end
		s2: state <= s2;
	endcase
	end
end
endmodule
