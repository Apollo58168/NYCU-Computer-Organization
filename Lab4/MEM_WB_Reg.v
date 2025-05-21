module MEM_WB_Reg (
    input wire clk,
    input wire rst,

    input wire [1:0] memtoReg_i,
    input wire regWrite_i,

    input wire [31:0] pc_4_i,
    input wire [31:0] ALU_i,
    input wire [31:0] readData_i,
    input wire [31:0] inst_i,

    output reg [1:0] memtoReg_o,
    output reg regWrite_o,

    output reg [31:0] pc_4_o,
    output reg [31:0] ALU_o,
    output reg [31:0] readData_o,
    output reg [31:0] inst_o
);
    
    always @(negedge clk) begin
        if (clk) begin
            memtoReg_o   <= 2'b00;
            regWrite_o   <= 1'b0;

            ALU_o        <= 32'b0;
            readData_o   <= 32'b0;
            pc_4_o       <= 32'b0;
            inst_o       <= 32'b0;
        end else begin
            memtoReg_o   <= memtoReg_i;
            regWrite_o   <= regWrite_i;

            ALU_o        <= ALU_i;
            readData_o   <= readData_i;
            pc_4_o       <= pc_4_i;
            inst_o       <= inst_i;
        end
    end

endmodule
