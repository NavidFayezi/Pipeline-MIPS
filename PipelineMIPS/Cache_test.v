`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:36:29 11/06/2020
// Design Name:   Cache
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/Cache_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Cache
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Cache_test;

	// Inputs
	reg [15:0] address;
	reg [63:0] data;
	reg clk;

	// Outputs
	wire hit;
	wire [15:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	Cache uut (
		.address(address), 
		.data(data), 
		.clk(clk), 
		.hit(hit), 
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		address = 0;
		data = 64'h0003000200010000;
		clk = 0;
		
		#60;
		data = 64'bx;
		address = address +2;
		#60;
		address = address +2;
		#60;
		address = address +2;
		#60;
		address = address +2;
		// Wait 100 ns for global reset to finish
		#60;
		data = 64'h0007000600050004;
		address = 10;
		
        
		// Add stimulus here

	end

   always #30 clk = ~clk;  
endmodule

