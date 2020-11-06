`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:08:34 11/06/2020
// Design Name:   Fetch_stage
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/Fetch_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Fetch_stage
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Fetch_test;

	// Inputs
	reg clk;
	reg [15:0] branch_target;
	reg pcSrc;

	// Outputs
	wire hit;
	wire [15:0] pc_inc2;
	wire [15:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	Fetch_stage uut (
		.clk(clk), 
		.branch_target(branch_target), 
		.pcSrc(pcSrc), 
		.hit(hit), 
		.pc_inc2(pc_inc2), 
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		branch_target = 0;
		pcSrc = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always #30 clk = ~clk;   
endmodule

