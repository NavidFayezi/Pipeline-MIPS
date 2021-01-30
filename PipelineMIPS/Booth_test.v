`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:20:24 01/30/2021
// Design Name:   Booth_algorithm
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/Booth_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Booth_algorithm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Booth_test;

	// Inputs
	reg clk;
	reg [15:0] a;
	reg [15:0] b;
	reg start;

	// Outputs
	wire ready;
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	Booth_algorithm uut (
		.clk(clk), 
		.a(a), 
		.b(b),
		.start(start),
		.ready(ready), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		a = 4;
		b = 7;
		start = 0;
		// Wait 100 ns for global reset to finish
		#170;
		start = 1;
		#180;
		start = 0;
		#180;
		start = ~start;
		a = 1;
		#180;
		start = ~start;
		#180;
		b = -1;
		start = ~start;
		#180;
		start = ~start;
		#180;
		a = - 10;
		start = ~start;
		#180;
		start = ~start;
        
		// Add stimulus here

	end
	always #10 clk = ~clk;
endmodule

