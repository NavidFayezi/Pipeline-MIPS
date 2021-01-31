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
integer i;

initial 
begin
counter = 0;
mem[0] = 8'b10001000;				// addi, r3 = r0 + 8
mem[1] = 8'b11100001;
for (i = 2 ; i < 8 ; i = i + 1)
	mem[i] = 0;
mem[8] = 8'b01110000;				// add, r7 = r3 + r0
mem[9] = 8'b00001100;
for (i = 10 ; i < 16 ; i = i + 1)
	mem[i] = 0;
mem[16] = 8'b10001010;				// beq r3,r7,10
mem[17] = 8'b11001111; 
for (i = 18 ; i < 38 ; i = i + 1)
	mem[i] = 0;
mem[38] = 8'b10000111;				// mem[$7 + 7 ] = $7
mem[39] = 8'b10111111;
mem[40] = 8'b00000111;				// $6 = mem[$7 + 7]
mem[41] = 8'b10011111;

mem[42] = 8'b01111000;
mem[43] = 8'b00011001;				// $7 = $6 * $2
 
mem[44] = 8'b00011001;
mem[45] = 8'b00011001;				// $1 = $6 * $2 
for (i = 46 ; i < 54 ; i = i + 1)
	mem[i] = 0;
end



always@(posedge clk)
begin
	ins = {64{1'bx}};					// output X if data is not ready
	if ( temp_address != address)
		begin
		counter = 0;
		temp_address = address;
		end
	if (counter == 0)
		temp_address = address;
	counter = counter + 1;
	if (counter == 5)					// memory has a 5 cycle access time. i used counter to simulate that.
		begin
		ins ={mem[{address[15:3],3'b111}],mem[{address[15:3],3'b110}],
				mem[{address[15:3],3'b101}],mem[{address[15:3],3'b100}],
				mem[{address[15:3],3'b011}],mem[{address[15:3],3'b010}],
				mem[{address[15:3],3'b001}],mem[{address[15:3],3'b000}]};
		counter = 0;
		end
end

endmodule
