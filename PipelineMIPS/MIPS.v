`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:10:12 11/30/2020 
// Design Name: 
// Module Name:    MIPS 
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
module MIPS(input clk
    );

wire pcSrc;
wire hit;
wire [15:0] pc_plus_2;
wire [15:0] instruction;
wire [15:0] instruction_out_pipe_1;
wire [15:0] pc_plus_2_out_pipe_1;
wire [2:0] opCode;
wire regDst,aluSrc,memtoReg,regWrite,memRead,memWrite,branch;
wire [1:0] aluOp;
wire [15:0] read_data_1;
wire [15:0] read_data_2;
wire [15:0] sign_extended_imm;
wire [2:0] rt;
wire [2:0] rd;
wire  regDst_out_pipe_2,aluSrc_out_pipe_2,memtoReg_out_pipe_2,regWrite_out_pipe_2,
		memRead_out_pipe_2,memWrite_out_pipe_2,branch_out_pipe_2;
wire [1:0] aluOp_out_pipe_2;
wire [15:0] sign_extended_imm_out_pipe_2,read_data_1_out_pipe_2,read_data_2_out_pipe_2,
								pc_plus_2_out_pipe_2;
wire [2:0] rd_out_pipe_2,rt_out_pipe_2;

wire [2:0] write_reg_ex;
wire [15:0] aluResult;
wire zero;
wire [15:0] branch_target;

assign pcSrc = 0; ////////////////////////////////////////

Fetch_stage fetch_stage (
    .clk(clk), 
    .branch_target(branch_target), 
    .pcSrc(pcSrc), 
    .hit(hit), 
    .pc_inc2(pc_plus_2), 
    .instruction(instruction)
    );


IFIDreg IF_ID (
    .clk(clk), 
    .instruction(instruction),
	 .en(hit),
    .pc_plus_2(pc_plus_2), 
    .instruction_out(instruction_out_pipe_1), 
    .pc_plus_2_out(pc_plus_2_out_pipe_1)
    );





Control_Unit control_unit (
    .opCode(opCode), 
    .regDst(regDst), 
    .aluSrc(aluSrc), 
    .memtoReg(memtoReg), 
    .regWrite(regWrite), 
    .memRead(memRead), 
    .memWrite(memWrite), 
    .branch(branch), 
    .aluOp(aluOp)
    );



decode decode_stage (
    .clk(clk), 
    .instruction(instruction_out_pipe_1), 
    .opcode(opCode), 
    .read_data_1(read_data_1), 
    .read_data_2(read_data_2), 
    .sign_extended_imm(sign_extended_imm), 
    .rt(rt), 
    .rd(rd)
    );



ID_EX_pipline_reg id_ex (
    .regDst(regDst), 
    .aluSrc(aluSrc), 
    .memtoReg(memtoReg), 
    .regWrite(regWrite), 
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
	 .en(hit),
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

Execute_stage execute (
    .aluSrc(aluSrc_out_pipe_2), 
    .aluOp(aluOp_out_pipe_2), 
    .pc_plus_2_out_pipe_2(pc_plus_2_out_pipe_2), 
    .read_data_1_out_pipe_2(read_data_1_out_pipe_2), 
    .read_data_2_out_pipe_2(read_data_2_out_pipe_2), 
    .sign_extended_imm_out_pipe_2(sign_extended_imm_out_pipe_2), 
    .rd_pipe_2(rd_out_pipe_2), 
    .rt_pipe_2(rt_out_pipe_2), 
    .regDst(regDst_out_pipe_2), 
    .branch_target(branch_target), 
    .zero(zero), 
    .aluResult(aluResult), 
    .write_reg_ex(write_reg_ex)
    );

endmodule
