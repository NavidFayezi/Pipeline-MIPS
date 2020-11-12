`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:22 11/12/2020 
// Design Name: 
// Module Name:    register_file 
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
module register_file(input clk, input reg_write, input [2:0] read_reg_1, input [2:0] read_reg_2, input [2:0] write_reg,
							input [15:0] write_data, output [15:0] read_data_1, output [15:0] read_data_2
    );

reg [15:0] registers [7:0];

integer i;
initial begin
registers[0] = 0;
for (i = 1; i<8; i = i+1)
	registers[i]= i;
end

always@(posedge clk)
begin
	if(reg_write & (write_reg[0] | write_reg[1] | write_reg[2]))
		registers[write_reg] <= write_data;
end

assign read_data_1 = registers[read_reg_1];
assign read_data_2 = registers[read_reg_2];


endmodule
