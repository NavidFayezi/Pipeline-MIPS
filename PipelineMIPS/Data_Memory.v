`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:49 12/11/2020 
// Design Name: 
// Module Name:    Data_Memory 
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
module Data_Memory(input [15:0] address, input [15:0] write_data, input memWrite, memRead,
						output reg [15:0] read_data
    );
reg [7:0] mem [1023:0];

integer i;

initial 
begin
for ( i =0 ; i<50; i = i+2)
	begin
	mem[i] = i;
	mem[i+1] = 0;
	end
end

always@(*)
begin
	if(memWrite)
	begin
	mem[address] <= write_data[7:0];
	mem[address+1] <= write_data[15:8];
	end
	if(memRead)
	begin
	read_data[7:0] <= mem[address];
	read_data[15:8] <= mem[address+1];
	end
end
endmodule
