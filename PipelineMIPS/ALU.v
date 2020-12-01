`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:44:11 12/01/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(input [15:0] in1,in2,input [2:0] aluCnt, output zero,output [15:0] aluResult
    );

assign aluResult = aluCnt == 3'b000 ? in1 + in2:
						 aluCnt == 3'b001 ? in1 - in2:
						 aluCnt == 3'b010 ? ~in1:
						 aluCnt == 3'b011 ? in1 << in2:
						 aluCnt == 3'b100 ? in1 >> in2:
						 aluCnt == 3'b101 ? in1 & in2:
						 aluCnt == 3'b110 ? in1 | in2:
										( in1 < in2 ? 1 : 0);
							
assign zero = aluResult == 0 ? 1 : 0 ;

endmodule
