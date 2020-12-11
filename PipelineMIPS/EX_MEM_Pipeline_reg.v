`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:16:53 12/11/2020 
// Design Name: 
// Module Name:    EX_MEM_Pipeline_reg 
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
module EX_MEM_Pipeline_reg(input clk, en, branch_out_pipe_2, memWrite_out_pipe_2, memRead_out_pipe_2,
									memtoReg_out_pipe_2, regWrite_out_pipe_2, zero, input [15:0] branch_target,
									aluResult, read_data_2_out_pipe_2, input [2:0] write_reg_ex, 
									output reg branch_out_pipe_3, memWrite_out_pipe_3, memRead_out_pipe_3,
									memtoReg_out_pipe_3, regWrite_out_pipe_3, zero_out_pipe_3, 
									output reg [15:0] branch_target_out_pipe_3,
									aluResult_out_pipe_3, read_data_2_out_pipe_3, output reg [2:0] write_reg_ex_out_pipe_3 
    );
initial begin branch_out_pipe_3 = 0; end
always@(negedge clk)
begin 
	if(en)
	begin
	write_reg_ex_out_pipe_3 <= write_reg_ex;
	read_data_2_out_pipe_3 <= read_data_2_out_pipe_2;
	aluResult_out_pipe_3 <= aluResult;
	branch_target_out_pipe_3 <= branch_target;
	zero_out_pipe_3 <= zero;
	regWrite_out_pipe_3 <= regWrite_out_pipe_2;
	memtoReg_out_pipe_3 <= memtoReg_out_pipe_2;
	memRead_out_pipe_3 <= memRead_out_pipe_2;
	memWrite_out_pipe_3 <= memWrite_out_pipe_2;
	branch_out_pipe_3 <= branch_out_pipe_2;
	end
end
endmodule
