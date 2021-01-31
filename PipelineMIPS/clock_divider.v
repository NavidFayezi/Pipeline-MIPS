`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:38:47 01/31/2021 
// Design Name: 
// Module Name:    clock_divider 
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
module clock_divider(input clk_20, output reg clk
    );
	 
reg [5:0] counter = 0;
always@(posedge clk_20)
begin
	if(counter == 0)
		begin
		clk <= 0;
		counter <= counter + 1;
		end
	else
		begin
		clk <= 1;
		counter <= (counter + 1 )%20;
		end
end

endmodule
