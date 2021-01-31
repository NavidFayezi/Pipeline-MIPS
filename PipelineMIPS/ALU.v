`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:44:11 12/01/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(input clk_20,clk1, input [15:0] in1,in2,input [3:0] aluCnt, output zero,output [15:0] aluResult
    );


wire ready_mult, ready_div;

wire [31:0] mult_res, div_res;

Booth_algorithm booth (
    .clk(clk_20), 
    .start(clk1), 
    .a(in1), 
    .b(in2), 
    .ready(ready_mult), 
    .result(mult_res)
    );

Division_module div_mod (
    .clk(clk_20), 
    .start(clk1), 
    .divisor(in2), 
    .dividend(in1), 
    .ready(ready_div), 
    .result(div_res)
    );

assign aluResult = aluCnt == 4'b0000 ? in1 + in2:
						 aluCnt == 4'b0001 ? in1 - in2:
						 aluCnt == 4'b0010 ? ~in1:
						 aluCnt == 4'b0011 ? in1 << in2:
						 aluCnt == 4'b0100 ? in1 >> in2:
						 aluCnt == 4'b0101 ? in1 & in2:
						 aluCnt == 4'b0110 ? in1 | in2:
						 aluCnt == 4'b0111 ? (in1 < in2 ? 1 : 0):
						 aluCnt == 4'b1100 ? mult_res[15:0]:
						 aluCnt == 4'b1110 ? div_res[31:16]:
						 16'bx;
							
assign zero = aluResult == 0 ? 1 : 0 ;

endmodule
