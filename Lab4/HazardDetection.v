module HazardDetection(
    input wire [4:0] id_R1,      // Source register 1 in ID stage
    input wire [4:0] id_R2,      // Source register 2 in ID stage
    input wire [4:0] ex_Rd,       // Destination register in EX stage
    input wire [4:0] mem_Rd,       // Destination register in MEM stage
    input BrEq,
    input BrLT,
    input wire ex_MemRead,
    input wire mem_Memread,
    input wire ex_RegWrite,
    input [6:0] opcode,
    input [2:0] funct3,

    output reg RePC,             // re-fetch the flushed instruction
    output reg Flush_HD    // flush IF/ID reg & ID/EX reg
);

    // This unit checks for potential data hazards that cannot be resolved by forwarding.

    // TODO: implement your hazard detection unit here

    // Hint:
    // You can design your own inputs and outputs as needed, as long as everything functions
    // correctly in the end.
    // Refer to the textbook for scenarios where forwarding cannot resolve data hazards,
    // for example, where using a stall might be necessary.

    // Be mindful of data hazards that may occur with branch instructions.
    // Data hazards can arise when a branch instruction depends on the result of previous instructions,
    // such as when the values being compared in a branch are not yet computed.
    // In such cases, if forwarding cannot resolve the hazard, you may need to insert a stall to avoid incorrect execution.
    always @(*) begin
        // default: no hazard
        RePC     = 1'b0;
        Flush_HD = 1'b0;


        // Load-Use Hazard Detection (only lw causes this)
        if ((ex_MemRead && ((ex_Rd == id_R1) || (ex_Rd == id_R2)))) begin
            RePC     = 1'b1;  // stall PC 
            Flush_HD = 1'b1;  // flush ID/EX register and inject bubble
        end else if ((mem_Memread && ((mem_Rd == id_R1) || (mem_Rd == id_R2)))) begin
            RePC     = 1'b1;  // stall PC 
            Flush_HD = 1'b1;  // flush ID/EX register and inject bubble
        end
        
        else if (opcode == 7'b1100011 && ex_RegWrite && (
            ex_Rd == id_R1 || ex_Rd == id_R2) && ex_Rd != 0) begin
            case(funct3)
                3'b000: if(BrEq == 1) begin RePC = 0; Flush_HD = 1;end
                3'b001: if(BrEq == 0) begin RePC = 0; Flush_HD = 1;end
                3'b100: if(BrLT == 1) begin RePC = 0; Flush_HD = 1;end
                3'b101: if(BrLT == 0) begin RePC = 0; Flush_HD = 1;end
                default: begin RePC = 0; Flush_HD = 0;end
            endcase
        end
    end

endmodule
