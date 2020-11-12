`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:21:24 11/12/2020
// Design Name:   decode
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/decode_stage_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decode
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decode_stage_test;

	// Inputs
	reg clk;
	reg [15:0] instruction;

	// Outputs
	wire [2:0] opcode;
	wire [15:0] read_data_1;
	wire [15:0] read_data_2;
	wire [15:0] sign_extended_imm;
	wire [2:0] rt;
	wire [2:0] rd;

	// Instantiate the Unit Under Test (UUT)
	decode uut (
		.clk(clk), 
		.instruction(instruction), 
		.opcode(opcode), 
		.read_data_1(read_data_1), 
		.read_data_2(read_data_2), 
		.sign_extended_imm(sign_extended_imm), 
		.rt(rt), 
		.rd(rd)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		instruction = 16'b001_010_011_100_0000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always#30 clk = ~clk;   
endmodule

