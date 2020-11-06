`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:52:02 11/06/2020 
// Design Name: 
// Module Name:    Cache 
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
module Cache(input [15:0] address, input [63:0] data, input clk, output reg hit, output reg [15:0] instruction
    );

reg [74:0] cache_reg [7:0];
integer i;

initial begin


for( i = 0; i<8; i=i+1)
	cache_reg[0][74]=1;
end

always@(data)
begin 
	
	if(data !== 64'bx)
		begin
		cache_reg[address[5:3]][63:0] <= data;
		cache_reg[address[5:3]][73:64] <= address[15:6];
		cache_reg[address[5:3]][74] <=1;
		end
end

always@(posedge clk)
begin
	if(cache_reg[address[5:3]][73:64] == address[15:6] & cache_reg[address[5:3]][74] == 1)
		begin
		hit <= 1;
		if(address[2:1] == 2'b00)
			instruction <= cache_reg[address[5:3]][15:0];
		if(address[2:1] == 2'b01)
			instruction <= cache_reg[address[5:3]][31:16];
		if(address[2:1] == 2'b10)
			instruction <= cache_reg[address[5:3]][47:32];
		if(address[2:1] == 2'b11)
			instruction <= cache_reg[address[5:3]][63:48];
		end
	else
		begin
		hit<= 0;
		instruction<=64'bx;
		end

end


endmodule
