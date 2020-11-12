`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:54:15 11/12/2020
// Design Name:   register_file
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/register_file_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: register_file
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module register_file_test;

	// Inputs
	reg clk;
	reg reg_write;
	reg [2:0] read_reg_1;
	reg [2:0] read_reg_2;
	reg [2:0] write_reg;
	reg [15:0] write_data;

	// Outputs
	wire [15:0] read_data_1;
	wire [15:0] read_data_2;

	// Instantiate the Unit Under Test (UUT)
	register_file uut (
		.clk(clk), 
		.reg_write(reg_write), 
		.read_reg_1(read_reg_1), 
		.read_reg_2(read_reg_2), 
		.write_reg(write_reg), 
		.write_data(write_data), 
		.read_data_1(read_data_1), 
		.read_data_2(read_data_2)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reg_write = 0;
		read_reg_1 = 0;
		read_reg_2 = 7;
		write_reg = 0;
		write_data = 0;

		// Wait 100 ns for global reset to finish
		#100;
		reg_write = 1;
		write_reg = 7;
        
		// Add stimulus here

	end
   always#30 clk = ~clk;   
endmodule

