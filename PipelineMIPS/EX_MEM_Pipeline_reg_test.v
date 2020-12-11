`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:42:52 12/11/2020
// Design Name:   EX_MEM_Pipeline_reg
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/EX_MEM_Pipeline_reg_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EX_MEM_Pipeline_reg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module EX_MEM_Pipeline_reg_test;

	// Inputs
	reg clk;
	reg en;
	reg branch_out_pipe_2;
	reg memWrite_out_pipe_2;
	reg memRead_out_pipe_2;
	reg memtoReg_out_pipe_2;
	reg regWrite_out_pipe_2;
	reg zero;
	reg [15:0] branch_target;
	reg [15:0] aluResult;
	reg [15:0] read_data_2_out_pipe_2;
	reg [2:0] write_reg_ex;

	// Outputs
	wire branch_out_pipe_3;
	wire memWrite_out_pipe_3;
	wire memRead_out_pipe_3;
	wire memtoReg_out_pipe_3;
	wire regWrite_out_pipe_3;
	wire zero_out_pipe_3;
	wire [15:0] branch_target_out_pipe_3;
	wire [15:0] aluResult_out_pipe_3;
	wire [15:0] read_data_2_out_pipe_3;
	wire [2:0] write_reg_ex_out_pipe_3;

	// Instantiate the Unit Under Test (UUT)
	EX_MEM_Pipeline_reg uut (
		.clk(clk), 
		.en(en), 
		.branch_out_pipe_2(branch_out_pipe_2), 
		.memWrite_out_pipe_2(memWrite_out_pipe_2), 
		.memRead_out_pipe_2(memRead_out_pipe_2), 
		.memtoReg_out_pipe_2(memtoReg_out_pipe_2), 
		.regWrite_out_pipe_2(regWrite_out_pipe_2), 
		.zero(zero), 
		.branch_target(branch_target), 
		.aluResult(aluResult), 
		.read_data_2_out_pipe_2(read_data_2_out_pipe_2), 
		.write_reg_ex(write_reg_ex), 
		.branch_out_pipe_3(branch_out_pipe_3), 
		.memWrite_out_pipe_3(memWrite_out_pipe_3), 
		.memRead_out_pipe_3(memRead_out_pipe_3), 
		.memtoReg_out_pipe_3(memtoReg_out_pipe_3), 
		.regWrite_out_pipe_3(regWrite_out_pipe_3), 
		.zero_out_pipe_3(zero_out_pipe_3), 
		.branch_target_out_pipe_3(branch_target_out_pipe_3), 
		.aluResult_out_pipe_3(aluResult_out_pipe_3), 
		.read_data_2_out_pipe_3(read_data_2_out_pipe_3), 
		.write_reg_ex_out_pipe_3(write_reg_ex_out_pipe_3)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		en = 0;
		branch_out_pipe_2 = 1;
		memWrite_out_pipe_2 = 1;
		memRead_out_pipe_2 = 1;
		memtoReg_out_pipe_2 = 1;
		regWrite_out_pipe_2 = 1;
		zero = 1;
		branch_target = 15;
		aluResult = 7;
		read_data_2_out_pipe_2 = 10;
		write_reg_ex = 5;

		// Wait 100 ns for global reset to finish
		#100;
		en = 1;
        
		// Add stimulus here

	end
   always #10 clk = ~clk;   
endmodule

