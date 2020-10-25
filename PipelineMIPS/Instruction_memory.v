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
module Instruction_memory( input  [15:0] address, input clk, output reg [63:0] ins
    );

reg [5:0] counter;
reg [15:0] temp_address;
reg [7:0] mem [1023:0];

initial 
begin
counter = 0;
mem[0] = 0;
mem[1] = 1;
mem[2] = 2;
mem[3] = 3;
mem[4] = 4;
mem[5] = 5;
end



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
		ins ={mem[{address[15:3],3'b111}],mem[{address[15:3],3'b110}],mem[{address[15:3],3'b101}],mem[{address[15:3],3'b100}],mem[{address[15:3],3'b011}],mem[{address[15:3],3'b010}],mem[{address[15:3],3'b001}],mem[{address[15:3],3'b000}]};
		counter = 0;
		end
end

endmodule
