`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:40:39 10/24/2020 
// Design Name: 
// Module Name:    Instruction_memory 
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
module Instruction_memory( input  [15:0] address, input clk, output reg [15:0] ins
    );

reg [5:0] counter;
reg [15:0] temp_address;

initial 
begin
counter = 0;
end

reg [7:0] mem [1023:0];

always@(posedge clk)
begin
	
	if ( temp_address != address)
		begin
		counter = 0;
		temp_address = address;
		end
	if (counter == 0)
		temp_address = address;
	counter = counter + 1;
	if (counter == 5)
		begin
		ins = mem[address];
		counter = 0;
		end
end

endmodule
