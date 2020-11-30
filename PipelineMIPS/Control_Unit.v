`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:24:40 11/30/2020 
// Design Name: 
// Module Name:    Control_Unit 
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
module Control_Unit(input [2:0] opCode,
						output regDst,aluSrc,memtoReg,regWrite,
								memRead,memWrite,branch, output [1:0] aluOp
    );

wire [8:0] temp;

assign temp = opCode == 3'b000 ? 9'b100100000:
				  opCode == 3'b001 ? 9'b010100010:
				  opCode == 3'b010 ? 9'bxxxxxxxxx:
				  opCode == 3'b011 ? 9'bxxxxxxxxx:
				  opCode == 3'b100 ? 9'b011110011:
				  opCode == 3'b101 ? 9'b010001011:
				  opCode == 3'b110 ? 9'b000000101:
				  9'b010100011;

assign aluOp = temp[1:0];
assign branch = temp[2];
assign memWrite = temp[3];
assign memRead = temp[4];
assign regWrite = temp[5];
assign memtoReg = temp[6];
assign aluSrc = temp[7];
assign regDst = temp[8];				  

endmodule
