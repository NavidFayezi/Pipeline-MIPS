`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:30:27 10/24/2020 
// Design Name: 
// Module Name:    MUX 
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
module MUX(input select, input [15:0] in0, input [15:0] in1, output reg [15:0] out
    );

always@(select or in1 or in0)
begin 
	
	if(select == 1'b0)
		out <= in0;
	else if ( select == 1'b1)
		out <= in1;
		
	
end

endmodule
