`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:52:19 12/01/2020
// Design Name:   Execute_stage
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/Ececute_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Execute_stage
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Ececute_test;

	// Inputs
	reg aluSrc;
	reg [1:0] aluOp;
	reg [15:0] pc_plus_2_out_pipe_2;
	reg [15:0] read_data_1_out_pipe_2;
	reg [15:0] read_data_2_out_pipe_2;
	reg [15:0] sign_extended_imm_out_pipe_2;
	reg [2:0] rd_pipe_2;
	reg [2:0] rt_pipe_2;
	reg regDst;

	// Outputs
	wire [15:0] branch_target;
	wire zero;
	wire [15:0] aluResult;
	wire [2:0] write_reg_ex;

	// Instantiate the Unit Under Test (UUT)
	Execute_stage uut (
		.aluSrc(aluSrc), 
		.aluOp(aluOp), 
		.pc_plus_2_out_pipe_2(pc_plus_2_out_pipe_2), 
		.read_data_1_out_pipe_2(read_data_1_out_pipe_2), 
		.read_data_2_out_pipe_2(read_data_2_out_pipe_2), 
		.sign_extended_imm_out_pipe_2(sign_extended_imm_out_pipe_2), 
		.rd_pipe_2(rd_pipe_2), 
		.rt_pipe_2(rt_pipe_2), 
		.regDst(regDst), 
		.branch_target(branch_target), 
		.zero(zero), 
		.aluResult(aluResult), 
		.write_reg_ex(write_reg_ex)
	);

	initial begin
		// Initialize Inputs
		aluSrc = 0;
		aluOp = 0;
		pc_plus_2_out_pipe_2 = 2;
		read_data_1_out_pipe_2 = 3;
		read_data_2_out_pipe_2 = 1;
		sign_extended_imm_out_pipe_2 = 0;
		rd_pipe_2 = 1;
		rt_pipe_2 = 0;
		regDst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

