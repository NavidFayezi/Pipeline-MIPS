`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:54:45 12/01/2020
// Design Name:   ALU
// Module Name:   C:/Users/Markazi.co/Desktop/Computer architecture Lab/PipelineMIPS/ALU_test.v
// Project Name:  PipelineMIPS
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_test;

	// Inputs
	reg [15:0] in1;
	reg [15:0] in2;
	reg [2:0] aluCnt;

	// Outputs
	wire zero;
	wire [15:0] aluResult;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.in1(in1), 
		.in2(in2), 
		.aluCnt(aluCnt), 
		.zero(zero), 
		.aluResult(aluResult)
	);

	initial begin
		// Initialize Inputs
		in1 = 1;
		in2 = 0;
		aluCnt = 0;

		// Wait 100 ns for global reset to finish
		#10;
      if (aluResult == 1) $display("ADD succeeded");
		if (aluResult != 1) $display("ADD Failed");
		// Add stimulus here
		in1 = 5;
		in2 = 2;
		aluCnt = 1;
		#10;
		if (aluResult != 3) $display("SUB Failed");
		#10;
		aluCnt = aluCnt + 1;
		#10;
		if (aluResult != ~in1) $display("NOT Failed");
		#10;
		aluCnt = aluCnt + 1;
		#10;
		if (aluResult != (in1 << in2)) $display("SL Failed");
		#10;
		aluCnt = aluCnt + 1;
		#10;
		if (aluResult != (in1 >> in2)) $display("SR Failed");
		#10;
		aluCnt = aluCnt + 1;
		#10;
		if (aluResult != (in1 & in2)) $display("AND Failed");
		#10;
		aluCnt = aluCnt + 1;
		#10;
		if (aluResult != (in1 | in2)) $display("OR Failed");
		#10;
		aluCnt = aluCnt + 1;
		#10;
		if (aluResult != 0) $display("SLT Failed");
		
	end
      
endmodule

