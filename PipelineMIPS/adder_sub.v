`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:48:26 01/31/2021 
// Design Name: 
// Module Name:    adder_sub 
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
module adder_sub(input [1:0] booth_op, input [15:0] a,b,output [15:0] c
    );
assign c = booth_op == 2'b01 ? a+b:
			  booth_op == 2'b10 ? a-b:
			  a;
endmodule
