`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:30:46 01/31/2021
// Design Name:   Division_module
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/division_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Division_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module division_test;

	// Inputs
	reg clk;
	reg start;
	reg [15:0] divisor;
	reg [15:0] dividend;

	// Outputs
	wire ready;
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	Division_module uut (
		.clk(clk), 
		.start(start), 
		.divisor(divisor), 
		.dividend(dividend), 
		.ready(ready), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		start = 0;
		divisor = 2;
		dividend = 4;

		// Wait 100 ns for global reset to finish
		#100;
      start = 1;
		#100;
		dividend = 51;
		divisor = 5;
		#400;
		divisor = -2;
		dividend = 4;

	end
   always #10 clk = ~clk;   
endmodule

