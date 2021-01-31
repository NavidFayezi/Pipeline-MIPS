`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:28:15 01/31/2021 
// Design Name: 
// Module Name:    booth_cu 
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
module booth_cu(input L, input lsb, output reg [1:0] booth_op
    );
always@(*)
begin
	case({lsb,L})
	2'b01:begin
			booth_op <= 2'b01;
			end
	2'b10:begin
			booth_op <= 2'b10;
			end
	default: booth_op <= 2'b00;
	endcase
end
endmodule
