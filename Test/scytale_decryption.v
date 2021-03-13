`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:24:12 11/27/2020 
// Design Name: 
// Module Name:    scytale_decryption 
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
module scytale_decryption#(
			parameter D_WIDTH = 8, 
			parameter KEY_WIDTH = 8, 
			parameter MAX_NOF_CHARS = 50,
			parameter START_DECRYPTION_TOKEN = 8'hFA
		)(
			// Clock and reset interface
			input clk,
			input rst_n,
			
			// Input interface
			input[D_WIDTH - 1:0] data_i,
			input valid_i,
			
			// Decryption Key
			input[KEY_WIDTH - 1 : 0] key_N,
			input[KEY_WIDTH - 1 : 0] key_M,
			
			// Output interface
			output reg[D_WIDTH - 1:0] data_o,
			output reg valid_o,
			output reg busy
    );
reg[1:0] wait_valid; //folosit pentru a intarzia semnalul valid_o cu un ciclu de ceas
integer detector_repetare; 
integer stop_scriere;
integer i, oprire_citire;
integer index_citire;
reg[5:0] index;
reg[D_WIDTH-1:0] v [MAX_NOF_CHARS:0];

initial begin
	busy = 0; 
	valid_o = 0;
	data_o = 0;
	wait_valid = 0;
	index = 0;
	stop_scriere = 0;
	detector_repetare = 0;
	i = 0;
	index_citire = 0;
	oprire_citire = 0;
end
always @(posedge clk) begin
	if (valid_i == 1) begin
		data_o = 0;
		if ((data_i == START_DECRYPTION_TOKEN && oprire_citire == 0) || data_i == 0) begin // busy devine 1 cand citim caracterul de oprire
				busy = 1;
				oprire_citire = 0;
		end
		else begin   //altfel, bagam elementele in vector
			v[index] = data_i;
			index = index + 1;
		end
	end
	if (busy == 1) begin
		if(wait_valid == 1) begin
			valid_o = 1;
			//algoritm 
			data_o = v[i];
			i = i + key_N;
			stop_scriere = stop_scriere + 1;
			detector_repetare = detector_repetare + 1;
			if (detector_repetare == key_M ) begin
				index_citire = index_citire + 1;
				i = index_citire;
				detector_repetare = 0;
			end
		end
		else begin
			wait_valid = 1;	
		end	
	end 
	if (stop_scriere == key_N*key_M +1) begin
		busy = 0;
		valid_o = 0;
		wait_valid =0;
		i = 0;
		index = 0;
		stop_scriere = 0;
		detector_repetare = 0;
		index_citire = 0;
		data_o = 0;				
		oprire_citire = 0;
	end	
			
end

endmodule
