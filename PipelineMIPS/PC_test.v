`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:24:39 10/24/2020
// Design Name:   PC
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/PC_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_test;

	// Inputs
	reg [15:0] in;
	reg clk;
	reg ce;
	// Outputs
	wire [15:0] out;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.in(in), 
		.clk(clk),
		.ce(ce),
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		clk = 0;
		ce = 0;
		// Wait 100 ns for global reset to finish

		#60;
		in = in + 1;
		
		#12;
		in = in + 1;
		#12;
		in = in + 1;
		#12;
		ce = 1;
		in = in + 1;
		#12;
		in = in + 1;		
        
		// Add stimulus here

	end
   
	always #40 clk = ~clk;
endmodule

