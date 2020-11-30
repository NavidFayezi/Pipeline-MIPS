`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:42:30 11/30/2020
// Design Name:   Control_Unit
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/Control_Unit_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Control_Unit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Control_Unit_test;

	// Inputs
	reg [2:0] opCode;

	// Outputs
	wire regDst;
	wire aluSrc;
	wire memtoReg;
	wire regWrite;
	wire memRead;
	wire memWrite;
	wire branch;
	wire [1:0] aluOp;

	// Instantiate the Unit Under Test (UUT)
	Control_Unit uut (
		.opCode(opCode), 
		.regDst(regDst), 
		.aluSrc(aluSrc), 
		.memtoReg(memtoReg), 
		.regWrite(regWrite), 
		.memRead(memRead), 
		.memWrite(memWrite), 
		.branch(branch), 
		.aluOp(aluOp)
	);

	initial begin
		// Initialize Inputs
		opCode = 0;

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
   always #30 opCode = opCode + 1;   
endmodule

