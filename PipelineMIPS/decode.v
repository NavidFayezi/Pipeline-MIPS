`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:01:00 11/12/2020 
// Design Name: 
// Module Name:    decode 
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
module decode(input clk, reg_write, input [15:0] instruction, write_data, output [2:0] opcode, write_reg, output [15:0] read_data_1,
					output [15:0] read_data_2, output [15:0] sign_extended_imm, output [2:0] rt, output [2:0] rd
    );



assign opcode = instruction[15:13];
assign rt = instruction[9:7];
assign rd = instruction[6:4];
assign sign_extended_imm = {{9{instruction[6]}},instruction[6:0]};



register_file reg_file (
    .clk(clk), 
    .reg_write(reg_write), 
    .read_reg_1(instruction[12:10]), 
    .read_reg_2(instruction[9:7]), 
    .write_reg(write_reg), 
    .write_data(write_data), 
    .read_data_1(read_data_1), 
    .read_data_2(read_data_2)
    );


endmodule
