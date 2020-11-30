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

assign pcSrc = 0;

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




endmodule
