module Forwarding_Unit (
    input wire [4:0] id_R1,     // rs1 in ID (for branch)
    input wire [4:0] id_R2,     // rs2 in ID
    input wire [4:0] ex_R1,     // rs1 in EX (ALU)
    input wire [4:0] ex_R2,     // rs2 in EX (ALU)
    input wire [4:0] ex_Rd,
    input wire [4:0] mem_Rd,    // destination reg in MEM stage
    input wire [4:0] wb_Rd,     // destination reg in WB stage
    input wire ex_RegWrite,
    input wire mem_RegWrite,    // MEM stage write-back enable
    input wire wb_RegWrite,     // WB stage write-back enable

    output reg [1:0]id_ForwardA,     // Forward control for rs1 in ID (branch)
    output reg [1:0]id_ForwardB,     // Forward control for rs2 in ID (branch)
    output reg [1:0] ex_ForwardA, // EX ALU input A forwarding select
    output reg [1:0] ex_ForwardB  // EX ALU input B forwarding select
);

    // --- EX stage forwarding (ALU inputs) ---
    always @(*) begin
        // ex_ForwardA
        if (mem_RegWrite && (mem_Rd != 0) && (mem_Rd == ex_R1))
            ex_ForwardA = 2'b10; // forward from MEM
        else if (wb_RegWrite && (wb_Rd != 0) && (wb_Rd == ex_R1))
            ex_ForwardA = 2'b01; // forward from WB
        else
            ex_ForwardA = 2'b00; // no forwarding

        // ex_ForwardB
        if (mem_RegWrite && (mem_Rd != 0) && (mem_Rd == ex_R2))
            ex_ForwardB = 2'b10;
        else if (wb_RegWrite && (wb_Rd != 0) && (wb_Rd == ex_R2))
            ex_ForwardB = 2'b01;
        else
            ex_ForwardB = 2'b00;

        // ID_ForwardA
        if ( (ex_RegWrite && (ex_Rd != 0) && (ex_Rd == id_R1)))
            id_ForwardA = 2'b11;
        else if ( (mem_RegWrite && (mem_Rd != 0) && (mem_Rd == id_R1)))
            id_ForwardA = 2'b01;
        else if ((wb_RegWrite  && (wb_Rd  != 0) && (wb_Rd  == id_R1)))
            id_ForwardA = 2'b10;
        else
            id_ForwardA = 2'b00;

        // ID_ForwardB
        if ( (ex_RegWrite && (ex_Rd != 0) && (ex_Rd == id_R2)))
            id_ForwardB = 2'b11;
        else if ( (mem_RegWrite && (mem_Rd != 0) && (mem_Rd == id_R2)))
            id_ForwardB = 2'b01;
        else if ((wb_RegWrite  && (wb_Rd  != 0) && (wb_Rd  == id_R2)))
            id_ForwardB = 2'b10;
        else
            id_ForwardB = 2'b00;

    end

endmodule
