`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:12:00 11/23/2020 
// Design Name: 
// Module Name:    demux 
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

module demux #(
		parameter MST_DWIDTH = 32,
		parameter SYS_DWIDTH = 8
	)(
		// Clock and reset interface
		input clk_sys,
		input clk_mst,
		input rst_n,
		
		//Select interface
		input[1:0] select,
		
		// Input interface
		input [MST_DWIDTH -1  : 0]	 data_i,
		input 						 	 valid_i,
		
		//output interfaces
		output reg [SYS_DWIDTH - 1 : 0] 	data0_o,
		output reg     						valid0_o,
		
		output reg [SYS_DWIDTH - 1 : 0] 	data1_o,
		output reg     						valid1_o,
		
		output reg [SYS_DWIDTH - 1 : 0] 	data2_o,
		output reg     						valid2_o
    );
	 
	reg [MST_DWIDTH - 1 : 0] v;
	integer i;
	reg[2:0]counter_clk_sys;
	initial begin
		i = 0;
		counter_clk_sys = 0;
	end
	always @(posedge clk_mst) begin
		valid0_o <= 0;
		valid1_o <= 0;
		valid2_o <= 0;
		if (valid_i == 1) begin
			v <= data_i;
			if (select == 0) begin
				valid0_o <= 1;
			end
			else if (select == 1) begin
				valid1_o <= 1;
			end
			else if (select == 2) begin
				valid2_o <= 1;
			end
		end
	end
always @(posedge clk_sys) begin

		if (valid0_o == 1 || valid1_o == 1 || valid2_o ==	1)
		counter_clk_sys <= counter_clk_sys + 1;
		if (counter_clk_sys == 3) counter_clk_sys <= 0;
end
always @(*) begin	
			data0_o <= 0;
			data1_o <= 0;
			data2_o <= 0;
		
			if (valid0_o == 1) begin
				data0_o <= v[(31 - 8*counter_clk_sys) -: 8];
			end
			else if (valid1_o == 1) begin
				data1_o <= v[(31 - 8*counter_clk_sys) -: 8];
			end
			else if (valid2_o == 1) begin
				data2_o <= v[(31 - 8*counter_clk_sys) -: 8];
			end

end
endmodule