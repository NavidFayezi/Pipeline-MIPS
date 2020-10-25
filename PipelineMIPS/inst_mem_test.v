`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:10:37 10/25/2020
// Design Name:   Instruction_memory
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/inst_mem_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Instruction_memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module inst_mem_test;

	// Inputs
	reg [15:0] address;
	reg clk;

	// Outputs
	wire [15:0] ins;

	// Instantiate the Unit Under Test (UUT)
	Instruction_memory uut (
		.address(address), 
		.clk(clk), 
		.ins(ins)
	);

	initial begin
		// Initialize Inputs
		address = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

