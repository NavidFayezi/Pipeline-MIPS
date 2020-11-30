`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:29:41 11/30/2020
// Design Name:   IFIDreg
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/IFIDreg_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IFIDreg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IFIDreg_test;

	// Inputs
	reg clk;
	reg [15:0] instruction;
	reg [15:0] pc_plus_2;

	// Outputs
	wire [15:0] instruction_out;
	wire [15:0] pc_plus_2_out;

	// Instantiate the Unit Under Test (UUT)
	IFIDreg uut (
		.clk(clk), 
		.instruction(instruction), 
		.pc_plus_2(pc_plus_2), 
		.instruction_out(instruction_out), 
		.pc_plus_2_out(pc_plus_2_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		instruction = 0;
		pc_plus_2 = 0;

		// Wait 100 ns for global reset to finish
		#23;
		pc_plus_2 = pc_plus_2 + 2;
		instruction = instruction +2;
      #23;
		pc_plus_2 = pc_plus_2 + 2;
		instruction = instruction +2;
      #23;
		pc_plus_2 = pc_plus_2 + 2;
		instruction = instruction +2;
      #23;
		pc_plus_2 = pc_plus_2 + 2;
		instruction = instruction +2;
              
		// Add stimulus here

	end
   always #20 clk = ~clk;   
endmodule

