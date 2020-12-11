`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:00:22 12/11/2020
// Design Name:   Data_Memory
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/Data_Memory_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Data_Memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Data_Memory_test;

	// Inputs
	reg [15:0] address;
	reg [15:0] write_data;
	reg memWrite;
	reg memRead;

	// Outputs
	wire [15:0] read_data;

	// Instantiate the Unit Under Test (UUT)
	Data_Memory uut (
		.address(address), 
		.write_data(write_data), 
		.memWrite(memWrite), 
		.memRead(memRead), 
		.read_data(read_data)
	);

	initial begin
		// Initialize Inputs
		address = 0;
		write_data = 0;
		memWrite = 0;
		memRead = 1;

		// Wait 100 ns for global reset to finish
		#50;
      address = 0;
		memRead = 0;
		memWrite = 1;
		#50;
      address = 0;
		memRead = 1;
		memWrite = 0;
		// Add stimulus here

	end
   always #10 address = address + 2;   
endmodule

