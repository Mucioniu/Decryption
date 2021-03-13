`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:13:49 11/23/2020 
// Design Name: 
// Module Name:    decryption_regfile 
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
module decryption_regfile #(
			parameter addr_witdth = 8,
			parameter reg_width 	 = 16
		)(
			// Clock and reset interface
			input clk, 
			input rst_n,
			
			// Register access interface
			input[addr_witdth - 1:0] addr,
			input read,
			input write,
			input [reg_width -1 : 0] wdata,
			output reg[reg_width -1 : 0] rdata,
			output reg done,
			output reg error,
			
			// Output wires
			output [reg_width - 1 : 0] select,
			output [reg_width - 1 : 0] caesar_key,
			output [reg_width - 1 : 0] scytale_key,
			output [addr_witdth - 1 : 0] zigzag_key
    );
		

		reg[reg_width-1:0] regs [3:0]; //vectorul de 4 registri de cate 16 biti
					
		always @(posedge clk) begin
		
			if(!rst_n) begin                            //conditie in care registrul intra pe reset
				regs[0] <=16'h0;
				regs[1] <=16'h0;
				regs[2] <=16'hffff;
				regs[3] <=16'h2;
			end			
			else begin
				if(write) begin								//in cazul in care write-ul este 1, alege pe ce registru se va scrie informatia
					if(addr == 'b0) begin
					regs[0] <= {14'b0,wdata[1:0]};
					done <= 1;
					error <= 0;
					end
					
					else if(addr == 'h10) begin
					regs[1] <= wdata;
					done <= 1;
					error <= 0;
					end
					
					else if(addr == 'h12) begin
					regs[2] <= wdata;
					done <= 1;
					error <= 0;
					end
					
					else if(addr == 'h14) begin
					regs[3] <= wdata;
					done <= 1;
					error <= 0;
					end
					
					else begin
						done <= 1;
						error <= 1;
					end
				end	
						 
				else if(read==1) begin               //in cazul in care read-ul este 1, alege din ce registru scrie pe rdata
					if(addr == 0) begin
						rdata <= regs[0];
						done <= 1;
						error <= 0;
					end
				
					else if(addr == 'h10) begin
						rdata <= regs[1];
						done <= 1;
						error <= 0;
					end
				
					else if(addr == 'h12) begin
						rdata <= regs[2];
						error <= 0;
						done <= 1;
					end
				
					else if(addr == 'h14) begin
						rdata <= regs[3];
						error <= 0;
						done <= 1;
					end
			
					else begin
							done <= 1;
							error <= 1;
							rdata <= 0;
					end
				end
		
			else begin                   // cazul in care nu avem nici read nici write 
				done<=0;
				error<=0;
				rdata <= 0;
			end		
		end
	end
	
	assign select= regs[0];              //egalam informatia din vector spre registrul de care avem nevoie 
	assign caesar_key= regs[1];
	assign scytale_key= regs[2];
	assign zigzag_key= regs[3];
		
			
endmodule
