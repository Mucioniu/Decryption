`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:33:04 11/23/2020 
// Design Name: 
// Module Name:    zigzag_decryption 
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
module zigzag_decryption #(
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
			input[KEY_WIDTH - 1 : 0] key,
			
			// Output interface
			output reg busy,
			output reg[D_WIDTH - 1:0] data_o,
			output reg valid_o
    );
reg[1:0] wait_valid; //pentru a intarzia valid_o cu un ciclu de ceas
integer row1; //pozitia din linia 1 care va fi bagata in data_o
integer row2; //pozitia din linia 1 care va fi bagata in data_o
integer row3; //pozitia din linia 1 care va fi bagata in data_o, cand key=3
integer row4; ////pozitia din linia 1 care va fi bagata in data_o
integer row5;
integer which_row; //ne spune care de pe care linie va fi citit caracterul
integer index_citire;
integer i, oprire_citire;
integer allow_key; //fiind 0 la inceput, ne ajuta sa initializam pozitiile din linii cu valorile corespunzatoare
integer nr_oprire; 
integer vizitat_3; //variabila auxiliara care ne ajuta sa navigam de pe linia 2 in sus sau in jos
integer vizitat_2; //variabila auxiliara care ne ajuta sa navigam de pe linia 3 fie pe linia2, fie pe linia 4; cand key=4
integer vizitat_4;
reg[5:0] index;
reg[5:0] R;
reg[5:0] Q;
reg[5:0] D;
reg[D_WIDTH-1:0] v [MAX_NOF_CHARS:0];

initial begin
	busy = 0; 
	valid_o = 0;
	data_o = 0;
	wait_valid = 0;
	index = 0;
	row1 = 0;
	row2 = 0;
	which_row = 0;
	allow_key = 0;
	nr_oprire = 0;
	vizitat_3 = 0;
	oprire_citire = 0;
	vizitat_4 = 0;
end
always @(*) begin
//algoritm division pentru a calcula restul si catul impartirii 
// numarului de elemente din vector la ciclul matricei
	if (!key) begin
			$display("Nu se poate imparti la 0");
	end
	Q = 0;
	R = 0;
	if( key == 2) begin
		D = 2; 
	end 
	else if (key == 3) begin 
		D = 4;
	end
	else if (key == 4) begin
		D = 6;
	end
	else if (key == 5) begin
		D = 8;
	end
	for( i = 5; i >=0; i = i-1) begin
		R = R << 1;
		R[0] = index[i];
		if (R >= D) begin
			R = R - D;
			Q[i] = 1;
		end
	end
end
always @(posedge clk) begin
	if (valid_i == 1) begin
		data_o = 0;
		if ((data_i == START_DECRYPTION_TOKEN && oprire_citire == 0) || data_i == 0) begin
				busy = 1;
				oprire_citire = 1;
		end
		else begin
			v[index] = data_i;
			index = index + 1;
		end
	end
	if (busy == 1) begin
		if(wait_valid == 1) begin
			valid_o = 1;
			if (allow_key == 0) begin
				if (key == 2) begin
					which_row = 1;
					row1 = 0;
					if (R == 0) begin
						row2 = Q;
					end
					else begin
						row2 = Q + 1;
					end
				end
				else if (key == 3) begin
					which_row = 1;
					row1 = 0;
					if (R == 0) begin
						row2 = Q;
						row3 = 3*Q;
					end 
					else if(R == 1) begin
						row2 = Q+1;
						row3 = 3*Q + 1;
					end
					else if (R == 2 || R == 3) begin
						row2 = Q+1;
						row3 = 3*Q + 2;
					end 
				end
				else if (key == 4) begin
					which_row = 1;
					row1 = 0;
					if( R == 0) begin
						row2 = Q;
						row3 = 3*Q;
						row4 = 5*Q;
					end
					else if ( R == 1) begin
						row2 = Q + 1;
						row3 = 3*Q + 1;
						row4 = 5*Q + 1;
					end
					else if ( R == 2) begin
						row2 = Q + 1;
						row3 = 3*Q + 2;
						row4 = 5*Q + 2;
					end
					else if ( R == 3 || R == 4) begin
						row2 = Q + 1;
						row3 = 3*Q + 2;
						row4 = 5*Q + 3;
					end
					else if ( R == 5) begin
						row2 = Q + 1;
						row3 = 3*Q + 2;
						row4 = 5*Q + 4;
					end
				end
				else if (key == 5) begin
					which_row = 1;
					row1 = 0;
					if(R == 0) begin
						row2 = Q;
						row3 = 3*Q;
						row4 = 5*Q;
						row5 = 7*Q;
					end
					else if ( R == 1) begin
						row2 = Q + 1;
						row3 = 3*Q + 1;
						row4 = 5*Q + 1;
						row5 = 7*Q + 1;
					end
					else if ( R == 2) begin
						row2 = Q + 1;
						row3 = 3*Q + 2;
						row4 = 5*Q + 2;
						row5 = 7*Q + 2;
					end
					else if ( R == 3) begin
						row2 = Q + 1;
						row3 = 3*Q + 2;
						row4 = 5*Q + 3;
						row5 = 7*Q + 3;
					end
					else if ( R == 4 || R == 5) begin
						row2 = Q + 1;
						row3 = 3*Q + 2;
						row4 = 5*Q + 3;
						row5 = 7*Q + 4;
					end
					else if ( R == 6) begin
						row2 = Q + 1;
						row3 = 3*Q + 2;
						row4 = 5*Q + 3;
						row5 = 7*Q + 5;
					end
					else if ( R == 7) begin
						row2 = Q + 1;
						row3 = 3*Q + 2;
						row4 = 5*Q + 4;
						row5 = 7*Q + 6;
					end
				end
				allow_key = 1;
			end
			case(key) 
				2: begin
					nr_oprire = nr_oprire + 1;
					if (which_row == 1) begin
						data_o = v[row1];
						which_row = 2;
						row1 = row1 + 1;
					end
					else if (which_row == 2) begin
						data_o = v[row2];
						which_row = 1;
						row2 = row2 + 1;
					end
				end
				3: begin
					nr_oprire = nr_oprire + 1;
					if (which_row == 1) begin
						data_o = v[row1];
						which_row = 2;
						row1 = row1 + 1;
					end
					else if (which_row == 2) begin
						data_o = v[row2];
						if ( vizitat_3 == 1) begin
							which_row = 1;
							vizitat_3 = 0;
						end
						else begin
							which_row = 3;
						end
						row2 = row2 + 1;
						
					end
					else if (which_row == 3) begin
						data_o = v[row3];
						which_row = 2;
						row3 = row3 + 1;
						vizitat_3 = 1;
					end
				end
				4: begin
					nr_oprire = nr_oprire + 1;
					if (which_row == 1) begin
						data_o = v[row1];
						which_row = 2;
						row1 = row1 + 1;
					end
					else if (which_row == 2) begin
						data_o = v[row2];
						vizitat_2 = 1;
						if ( vizitat_3 == 1) begin
							which_row = 1;
							vizitat_3 = 0;
						end
						else begin
							which_row = 3;
						end
						row2 = row2 + 1;
					end
					else if (which_row == 3) begin
						data_o = v[row3];
						vizitat_3 = 1;
						if (vizitat_2 == 1) begin
							which_row = 4;
							vizitat_2 = 0;
						end
						else begin
							which_row = 2;
						end
						row3 = row3 + 1;
					end
					else if (which_row == 4) begin
						data_o = v[row4];
						which_row = 3;
						row4 = row4 + 1;
					end
				end
				5: begin
					nr_oprire = nr_oprire + 1;
					if (which_row == 1) begin
						data_o = v[row1];
						which_row = 2;
						row1 = row1 + 1;
					end
					else if (which_row == 2) begin
						data_o = v[row2];
						vizitat_2 = 1;
						if ( vizitat_3 == 1) begin
							which_row = 1;
							vizitat_3 = 0;
						end
						else begin
							which_row = 3;
						end
						row2 = row2 + 1;
					end
					else if (which_row == 3) begin
						data_o = v[row3];
						vizitat_3 = 1;
						if (vizitat_2 == 1) begin
							which_row = 4;
							vizitat_2 = 0;
						end
						else begin
							which_row = 2;
						end
						row3 = row3 + 1;
					end
					else if (which_row == 4) begin
						data_o = v[row4];
						vizitat_4 = 1;
						if (vizitat_3 == 1) begin
							which_row = 5;
							vizitat_3 = 0;
						end
						else begin
							which_row = 3;
						end
						row4 = row4 + 1;
					end
					else if (which_row == 5) begin
						data_o = v[row5];
						which_row = 4;
						row5 = row5 + 1;
					end
				end
			endcase
			
		end
		else begin
			wait_valid = 1;	
		end	
	end 
	if (nr_oprire == index + 1) begin
		busy = 0;
		valid_o = 0;
		wait_valid =0;
		index = 0;
		row1 = 0;
		row2 = 0;
		which_row = 0;
		data_o = 0;
		allow_key = 0;
		nr_oprire = 0;
		vizitat_3 = 0;
		row4 = 0;
		vizitat_2 = 0;
		vizitat_3 = 0;
		oprire_citire = 0;
		row5 = 0;
		vizitat_4 = 0;
	end	
end

endmodule
