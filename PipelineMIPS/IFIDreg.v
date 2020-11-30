`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:23:20 11/30/2020 
// Design Name: 
// Module Name:    IFIDreg 
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
module IFIDreg(input clk, input [15:0] instruction, input [15:0] pc_plus_2,
									output reg [15:0] instruction_out, output reg [15:0] pc_plus_2_out);

always@(negedge clk)
begin
	
	instruction_out <= instruction;
	pc_plus_2_out <= pc_plus_2;
	
end
endmodule
