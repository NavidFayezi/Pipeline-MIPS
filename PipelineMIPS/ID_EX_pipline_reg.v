`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:04:06 12/01/2020 
// Design Name: 
// Module Name:    ID_EX_pipline_reg 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ID_EX_pipline_reg(input regDst,aluSrc,memtoReg,regWrite,en,
								memRead,memWrite,branch,clk, input [1:0] aluOp, input [15:0] sign_extended_imm,read_data_1,read_data_2,
								pc_plus_2_out_pipe_1, input [2:0] rd,rt, output reg regDst_out_pipe_2,aluSrc_out_pipe_2,memtoReg_out_pipe_2,regWrite_out_pipe_2,
								memRead_out_pipe_2,memWrite_out_pipe_2,branch_out_pipe_2, output reg [1:0] aluOp_out_pipe_2,
								output reg [15:0] sign_extended_imm_out_pipe_2,read_data_1_out_pipe_2,read_data_2_out_pipe_2,
								pc_plus_2_out_pipe_2,output reg [2:0] rd_out_pipe_2,rt_out_pipe_2
    );

always@(negedge clk)
begin 
	if(en)
	begin
	pc_plus_2_out_pipe_2 <= pc_plus_2_out_pipe_1;
	read_data_2_out_pipe_2 <= read_data_2;
	read_data_1_out_pipe_2 <= read_data_1;
	sign_extended_imm_out_pipe_2 <= sign_extended_imm;
	aluOp_out_pipe_2 <= aluOp;
	branch_out_pipe_2 <= branch;
	memWrite_out_pipe_2 <= memWrite;
	memRead_out_pipe_2 <= memRead;
	regWrite_out_pipe_2 <= regWrite;
	memtoReg_out_pipe_2 <= memtoReg;
	aluSrc_out_pipe_2 <= aluSrc;
	regDst_out_pipe_2 <= regDst;
	rd_out_pipe_2 <= rd;
	rt_out_pipe_2 <= rt;
	end
end
endmodule

