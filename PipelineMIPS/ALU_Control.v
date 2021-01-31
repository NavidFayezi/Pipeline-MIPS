`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:31:54 12/01/2020 
// Design Name: 
// Module Name:    ALU_Control 
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
module ALU_Control(input [1:0] aluOp, input [3:0] func, output [3:0] aluCnt
    );

assign aluCnt = aluOp == 2'b00 ? (func == 4'b0000 ? 4'b0000 :
											 func == 4'b0001 ? 4'b0001 :
											 func == 4'b0010 ? 4'b0101 :
											 func == 4'b0011 ? 4'b0110 :
											 func == 4'b0100 ? 4'b0111 :
											 func == 4'b0101 ? 4'b0011 :
											 func == 4'b0110 ? 4'b0100 :
											 func == 4'b1000 ? 4'b1100 :		// multiplication
											 func == 4'b1001 ? 4'b1110 :		// division
											 4'b0010) :
								aluOp == 2'b01 ? 4'b0001 :
								aluOp == 2'b10 ? 4'b0111 :
								4'b0000;
endmodule
