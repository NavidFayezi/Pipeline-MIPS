`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:59:08 11/30/2020
// Design Name:   MIPS
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/MIPS_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MIPS
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MIPS_test;

	// Inputs
	reg clk_20;

	// Instantiate the Unit Under Test (UUT)
	MIPS uut (
		.clk_20(clk_20)
	);

	initial begin
		// Initialize Inputs
		clk_20 = 0;

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
   always #1 clk_20 = ~clk_20;
endmodule

