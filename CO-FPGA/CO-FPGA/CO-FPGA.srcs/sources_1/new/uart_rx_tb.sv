`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: CAS lab
// Create Date: 04/29/2025 10:21:33 PM
// Module Name: cpu_top
//////////////////////////////////////////////////////////////////////////////////

import "DPI-C" function int dpi_getchar();

module uart_rx_tb
(
    input        clk,
    input        rst,
    output       rd_ready,
    input        rd_valid,
    output [7:0] byte_data,
    input        cpu_ack
);

reg [7:0] byte_data_r;
reg rd_ready_r;
integer input_buf;

initial begin
    input_buf = 32'd0;
end


always @(posedge clk) begin
    if (rst) begin
        byte_data_r <= 8'h0;
        rd_ready_r <= 1'b0;
    end
    else if (rd_valid) begin
        input_buf <= dpi_getchar();
        rd_ready_r <= 1'b1;
    end
    else begin
        rd_ready_r <= 1'b0;
    end
end

assign rd_ready = 1'b1;
assign byte_data = input_buf[7:0];

always @(*) begin
    if (input_buf == 8'd24) begin
        $display("\n[uart_rx_tb.sv]: Cancel symbol recieved, finishing the simulation.");
        $finish;
    end
end

always @(posedge clk) begin
    if (cpu_ack) begin
        $display("\n[uart_rx_tb.sv]: CPU acked the transfer, current byte in uart: \"%c\"", byte_data);
    end
end

endmodule