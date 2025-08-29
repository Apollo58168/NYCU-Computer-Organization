`timescale 1ns / 1ps
`include "parameters.vh"

module cpu_tb_top;

parameter clk_divide_mhzns = `CPU_CLK / 100000000.0;

// Testbench Related
reg         tb_reset;
reg         cp0_clk;
reg         rst;
reg  [ 5:0] sync_rst_sr;

// CPU wires
wire        cp0_d_byte_mask;
wire        cp0_d_wr_valid;
wire        cp0_d_rd_en;
wire [31:0] cp0_d_addr;
wire [31:0] cp0_d_wr_data;
reg  [31:0] cp0_d_rd_data;
wire [31:0] cp0_i_addr;
wire [31:0] cp0_i_data;

wire [31:0] tcm_d_rd_data;
wire        uart_tx_stat;

wire [7 :0] uart_rx_data;
wire        uart_rx_stat;


initial begin
    tb_reset = 1;
    #(clk_divide_mhzns);
    #(clk_divide_mhzns);
    tb_reset = 0;
end

initial begin
    cp0_clk = 0;
end

always begin
    #((clk_divide_mhzns)/2) cp0_clk <= ~cp0_clk;
end

always @(posedge cp0_clk) begin
    if (tb_reset) begin
        sync_rst_sr <= 6'b111_111;
    end
    else begin
        sync_rst_sr <= (sync_rst_sr << 1);
    end
end

always @(posedge cp0_clk) begin
    rst <= sync_rst_sr[5];
end


// ====================================================================
// |                         YOUR CPU CORE HERE                       |
// ====================================================================

PipelineCPU 
CPU_core(
    .clk       (cp0_clk),
    .start     (~rst),

    .byteMask  (cp0_d_byte_mask),
    .memWrite  (cp0_d_wr_valid),
    .memRead   (cp0_d_rd_en),
    .address   (cp0_d_addr),
    .writeData (cp0_d_wr_data),
    .readData  (cp0_d_rd_data),

    .readAddr  (cp0_i_addr),
    .inst      (cp0_i_data)
);

// ====================================================================


TCM_wrapper
TCM_inst(
    .clk            (cp0_clk),

    // Data memory ports
    .d_rd_byte_mask (cp0_d_byte_mask),
    .d_wr_valid     (cp0_d_wr_valid & (cp0_d_addr[31:28] == 4'h0)),
    .d_rd_en        (cp0_d_rd_en),
    .d_addr         (cp0_d_addr),
    .d_wr_data      (cp0_d_wr_data),
    .d_rd_data      (tcm_d_rd_data),

    // Instruction memory ports
    .i_addr         (cp0_i_addr),
    .i_data         (cp0_i_data)
);


always @(*) begin
    if (cp0_d_addr[31:28] == 4'hA) begin
        if      (cp0_d_addr[3:0] == 4'h0) cp0_d_rd_data = {31'b0, uart_tx_stat};
        else if (cp0_d_addr[3:0] == 4'h2) cp0_d_rd_data = {31'b0, uart_rx_stat};
        else                              cp0_d_rd_data = {24'h0, uart_rx_data};
    end
    else if (cp0_d_addr[31:28] == 4'hB)   cp0_d_rd_data = 32'b0;
    else                                  cp0_d_rd_data = tcm_d_rd_data;
end


// UART stuff

uart_tx_tb
uart_tx_tb_inst(
    .clk       (cp0_clk),
    .rst       (rst),
    .wr_valid  (cp0_d_wr_valid & (cp0_d_addr[31:28] == 4'hA) & (cp0_d_addr[3:0] == 4'h0)),
    .byte_in   (cp0_d_wr_data[7:0]),
    .wr_ready  (uart_tx_stat)
);

uart_rx_tb
uart_rx_tb_inst(
    .clk       (cp0_clk),
    .rst       (rst),
    .rd_ready  (uart_rx_stat),
    .rd_valid  (cp0_d_rd_en & (cp0_d_addr[31:28] == 4'hA) & (cp0_d_addr[3:0] == 4'h2)),
    .byte_data (uart_rx_data),
    .cpu_ack   (cp0_d_wr_valid & (cp0_d_addr[31:28] == 4'hA) & (cp0_d_addr[3:0] == 4'h3))
);



endmodule