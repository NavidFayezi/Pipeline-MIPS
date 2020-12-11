`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:27:46 12/11/2020
// Design Name:   MEM_WB_Pipeline_reg
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/MEM_WB_Pipeline_reg_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MEM_WB_Pipeline_reg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MEM_WB_Pipeline_reg_test;

	// Inputs
	reg clk;
	reg en;
	reg regWrite_out_pipe_3;
	reg memtoReg_out_pipe_3;
	reg [2:0] write_reg_ex_out_pipe_3;
	reg [15:0] data_mem_read_data;
	reg [15:0] aluResult_out_pipe_3;

	// Outputs
	wire regWrite_out_pipe_4;
	wire memtoReg_out_pipe_4;
	wire [2:0] write_reg_ex_out_pipe_4;
	wire [15:0] data_mem_read_data_out_pipe_4;
	wire [15:0] aluResult_out_pipe_4;

	// Instantiate the Unit Under Test (UUT)
	MEM_WB_Pipeline_reg uut (
		.clk(clk), 
		.en(en), 
		.regWrite_out_pipe_3(regWrite_out_pipe_3), 
		.memtoReg_out_pipe_3(memtoReg_out_pipe_3), 
		.write_reg_ex_out_pipe_3(write_reg_ex_out_pipe_3), 
		.data_mem_read_data(data_mem_read_data), 
		.aluResult_out_pipe_3(aluResult_out_pipe_3), 
		.regWrite_out_pipe_4(regWrite_out_pipe_4), 
		.memtoReg_out_pipe_4(memtoReg_out_pipe_4), 
		.write_reg_ex_out_pipe_4(write_reg_ex_out_pipe_4), 
		.data_mem_read_data_out_pipe_4(data_mem_read_data_out_pipe_4), 
		.aluResult_out_pipe_4(aluResult_out_pipe_4)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		en = 0;
		regWrite_out_pipe_3 = 0;
		memtoReg_out_pipe_3 = 0;
		write_reg_ex_out_pipe_3 = 0;
		data_mem_read_data = 0;
		aluResult_out_pipe_3 = 0;

		// Wait 100 ns for global reset to finish
		#100;
      en = 1;  
		// Add stimulus here

	end
   always #10 clk = ~clk;   
endmodule

