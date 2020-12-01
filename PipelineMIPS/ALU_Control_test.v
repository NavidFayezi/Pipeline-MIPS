`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:49:03 12/01/2020
// Design Name:   ALU_Control
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/ALU_Control_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU_Control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_Control_test;

	// Inputs
	reg [1:0] aluOp;
	reg [3:0] func;

	// Outputs
	wire [2:0] aluCnt;

	// Instantiate the Unit Under Test (UUT)
	ALU_Control uut (
		.aluOp(aluOp), 
		.func(func), 
		.aluCnt(aluCnt)
	);

	initial begin
		// Initialize Inputs
		aluOp = 0;
		func = 0;

		// Wait 100 ns for global reset to finish
		#10;
		func = func + 1;
		#10;
		func = func + 1;
		#10;
		func = func + 1;
		#10;
		func = func + 1;
		#10;
		func = func + 1;
		#10;
		func = func + 1;
		#10;
		func = func + 1;
		#10;
		aluOp = 1;
		#10;
		aluOp = 2;
		#10;
		aluOp = 3;
		
		
        
		// Add stimulus here

	end
	
endmodule

