module IF_ID_Reg (
    input wire clk,
    input wire rst,
    input wire Flush_HD,
    input wire Flush_ctrl,
    input wire RePC,
    input wire [31:0] pc_i,
    input wire [31:0] pc_4_i,
    input wire [31:0] inst_i,
    output reg [31:0] pc_o,
    output reg [31:0] pc_4_o,
    output reg [31:0] inst_o
);

    always @(negedge clk or negedge rst) begin
        if (~rst) begin
            pc_o   <= 32'b0;
            pc_4_o <= 32'b0;
            inst_o <= 32'b0;
        end else if (Flush_HD && RePC) begin
            pc_o   <= pc_o;
            pc_4_o <= pc_4_o;
            inst_o <= inst_o;
        end else if (Flush_HD || Flush_ctrl) begin
            pc_o   <= 32'b0;
            pc_4_o <= 32'b0;
            inst_o <= 32'b00000000000000000000000000010011; // NOP = addi x0, x0, 0
        end else begin
            pc_o   <= pc_i;
            pc_4_o <= pc_4_i;
            inst_o <= inst_i;
        end
    end

endmodule
