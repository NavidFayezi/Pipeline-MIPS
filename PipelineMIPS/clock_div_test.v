`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:47:43 01/31/2021
// Design Name:   clock_divider
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/clock_div_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock_divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clock_div_test;

	// Inputs
	reg clk_20;

	// Outputs
	wire clk;

	// Instantiate the Unit Under Test (UUT)
	clock_divider uut (
		.clk_20(clk_20), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		clk_20 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always #10 clk_20 = ~clk_20;   
endmodule

