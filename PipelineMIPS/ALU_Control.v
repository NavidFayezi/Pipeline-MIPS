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
module ALU_Control(input [1:0] aluOp, input [3:0] func, output [2:0] aluCnt
    );

assign aluCnt = aluOp == 2'b00 ? (func == 4'b0000 ? 3'b000 :
											 func == 4'b0001 ? 3'b001 :
											 func == 4'b0010 ? 3'b101 :
											 func == 4'b0011 ? 3'b110 :
											 func == 4'b0100 ? 3'b111 :
											 func == 4'b0101 ? 3'b011 :
											 func == 4'b0110 ? 3'b100 :
											 3'b010) :
								aluOp == 2'b01 ? 3'b001 :
								aluOp == 2'b10 ? 3'b111 :
								3'b000;
endmodule
