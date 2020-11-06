`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:51:48 11/06/2020 
// Design Name: 
// Module Name:    Fetch_stage 
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
module Fetch_stage(input clk, input [15:0] branch_target, input pcSrc, output hit, output [15:0] pc_inc2, output [15:0] instruction
    );



wire [15:0] mux_to_pc;
wire [15:0] pc_out;
wire [63:0] mem_out;

MUX pc_mux (
    .select(pcSrc), 
    .in0(pc_inc2), 
    .in1(branch_target), 
    .out(mux_to_pc)
    );


PC program_counter (
    .in(mux_to_pc), 
    .clk(clk), 
    .ce(hit), 
    .out(pc_out)
    );
	 
assign pc_inc2 = pc_out + 2;

Instruction_memory ins_mem (
    .address(pc_out), 
    .clk(clk), 
    .ins(mem_out)
    );
	 
	 
Cache cache (
    .address(pc_out), 
    .data(mem_out), 
    .clk(clk), 
    .hit(hit), 
    .instruction(instruction)
    );











endmodule
