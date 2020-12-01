`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:26:05 12/01/2020 
// Design Name: 
// Module Name:    Execute_stage 
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
module Execute_stage(input aluSrc, input [1:0] aluOp, input [15:0] pc_plus_2_out_pipe_2,
							input [15:0] read_data_1_out_pipe_2,read_data_2_out_pipe_2,sign_extended_imm_out_pipe_2,
							input [2:0] rd_pipe_2,rt_pipe_2,input regDst,
							output [15:0] branch_target, output zero, output [15:0] aluResult,output [2:0] write_reg_ex
    );
wire [2:0] aluCnt;
wire [15:0] alu_input_2;


assign branch_target = pc_plus_2_out_pipe_2 + (sign_extended_imm_out_pipe_2 << 1);

assign alu_input_2 = aluSrc == 1 ? sign_extended_imm_out_pipe_2 : read_data_2_out_pipe_2;

ALU alu (
    .in1(read_data_1_out_pipe_2), 
    .in2(alu_input_2), 
    .aluCnt(aluCnt), 
    .zero(zero), 
    .aluResult(aluResult)
    );


ALU_Control alu_control(
    .aluOp(aluOp), 
    .func(sign_extended_imm_out_pipe_2[3:0]), 
    .aluCnt(aluCnt)
    );

assign write_reg_ex = regDst == 1 ? rd_pipe_2 : rt_pipe_2;

endmodule
