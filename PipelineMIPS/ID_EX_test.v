`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:14:00 12/01/2020
// Design Name:   ID_EX_pipline_reg
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/ID_EX_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ID_EX_pipline_reg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ID_EX_test;

	// Inputs
	reg regDst;
	reg aluSrc;
	reg memtoReg;
	reg regWrite;
	reg en;
	reg memRead;
	reg memWrite;
	reg branch;
	reg clk;
	reg [1:0] aluOp;
	reg [15:0] sign_extended_imm;
	reg [15:0] read_data_1;
	reg [15:0] read_data_2;
	reg [15:0] pc_plus_2_out_pipe_1;
	reg [2:0] rd;
	reg [2:0] rt;

	// Outputs
	wire regDst_out_pipe_2;
	wire aluSrc_out_pipe_2;
	wire memtoReg_out_pipe_2;
	wire regWrite_out_pipe_2;
	wire memRead_out_pipe_2;
	wire memWrite_out_pipe_2;
	wire branch_out_pipe_2;
	wire [1:0] aluOp_out_pipe_2;
	wire [15:0] sign_extended_imm_out_pipe_2;
	wire [15:0] read_data_1_out_pipe_2;
	wire [15:0] read_data_2_out_pipe_2;
	wire [15:0] pc_plus_2_out_pipe_2;
	wire [2:0] rd_out_pipe_2;
	wire [2:0] rt_out_pipe_2;

	// Instantiate the Unit Under Test (UUT)
	ID_EX_pipline_reg uut (
		.regDst(regDst), 
		.aluSrc(aluSrc), 
		.memtoReg(memtoReg), 
		.regWrite(regWrite), 
		.en(en), 
		.memRead(memRead), 
		.memWrite(memWrite), 
		.branch(branch), 
		.clk(clk), 
		.aluOp(aluOp), 
		.sign_extended_imm(sign_extended_imm), 
		.read_data_1(read_data_1), 
		.read_data_2(read_data_2), 
		.pc_plus_2_out_pipe_1(pc_plus_2_out_pipe_1), 
		.rd(rd), 
		.rt(rt), 
		.regDst_out_pipe_2(regDst_out_pipe_2), 
		.aluSrc_out_pipe_2(aluSrc_out_pipe_2), 
		.memtoReg_out_pipe_2(memtoReg_out_pipe_2), 
		.regWrite_out_pipe_2(regWrite_out_pipe_2), 
		.memRead_out_pipe_2(memRead_out_pipe_2), 
		.memWrite_out_pipe_2(memWrite_out_pipe_2), 
		.branch_out_pipe_2(branch_out_pipe_2), 
		.aluOp_out_pipe_2(aluOp_out_pipe_2), 
		.sign_extended_imm_out_pipe_2(sign_extended_imm_out_pipe_2), 
		.read_data_1_out_pipe_2(read_data_1_out_pipe_2), 
		.read_data_2_out_pipe_2(read_data_2_out_pipe_2), 
		.pc_plus_2_out_pipe_2(pc_plus_2_out_pipe_2), 
		.rd_out_pipe_2(rd_out_pipe_2), 
		.rt_out_pipe_2(rt_out_pipe_2)
	);

	initial begin
		// Initialize Inputs
		regDst = 0;
		aluSrc = 0;
		memtoReg = 0;
		regWrite = 0;
		en = 0;
		memRead = 0;
		memWrite = 0;
		branch = 0;
		clk = 0;
		aluOp = 0;
		sign_extended_imm = 0;
		read_data_1 = 0;
		read_data_2 = 0;
		pc_plus_2_out_pipe_1 = 0;
		rd = 0;
		rt = 0;

		// Wait 100 ns for global reset to finish
		#100;
			regDst = 1;
		aluSrc = 1;
		memtoReg = 1;
		regWrite = 1;
		en = 1;
		memRead = 1;
		memWrite = 1;
		branch = 1;
		clk = 1;
		aluOp = 1;
		sign_extended_imm = 1;
		read_data_1 = 1;
		read_data_2 = 1;
		pc_plus_2_out_pipe_1 = 1;
		rd = 1;
		rt = 1;
        
		// Add stimulus here

	end
   always #10 clk = ~clk;   
endmodule

