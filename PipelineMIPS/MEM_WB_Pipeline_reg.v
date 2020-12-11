`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:01 12/11/2020 
// Design Name: 
// Module Name:    MEM_WB_Pipeline_reg 
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
module MEM_WB_Pipeline_reg(input clk, en, regWrite_out_pipe_3, memtoReg_out_pipe_3,
									input [2:0] write_reg_ex_out_pipe_3, 
									input [15:0] data_mem_read_data, aluResult_out_pipe_3,
									output reg regWrite_out_pipe_4, memtoReg_out_pipe_4,
									output reg [2:0] write_reg_ex_out_pipe_4, 
									output reg [15:0] data_mem_read_data_out_pipe_4, aluResult_out_pipe_4
    );
always@(negedge clk)
begin
	if(en)
	begin
	regWrite_out_pipe_4 <= regWrite_out_pipe_3;
	memtoReg_out_pipe_4 <= memtoReg_out_pipe_3;
	write_reg_ex_out_pipe_4 <= write_reg_ex_out_pipe_3;
	data_mem_read_data_out_pipe_4 <= data_mem_read_data;
	aluResult_out_pipe_4 <= aluResult_out_pipe_3;
	end
end
endmodule
