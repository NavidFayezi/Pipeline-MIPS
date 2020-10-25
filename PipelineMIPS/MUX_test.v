`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:35:06 10/24/2020
// Design Name:   MUX
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/MUX_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MUX
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MUX_test;

	// Inputs
	reg select;
	reg [15:0] in0;
	reg [15:0] in1;

	// Outputs
	wire [15:0] out;

	// Instantiate the Unit Under Test (UUT)
	MUX uut (
		.select(select), 
		.in0(in0), 
		.in1(in1), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		select = 0;
		in0 = 0;
		in1 = 1;

		// Wait 100 ns for global reset to finish
		#12;
		in1 = in1 + 1;
		#12;
		in1 = in1 + 1;
		#12;
		in1 = in1 + 1;
		#12;
		in1 = in1 + 1;
        
		// Add stimulus here

	end
   always #20 select = ~select;   
endmodule

