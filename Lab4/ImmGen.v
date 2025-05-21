module ImmGen (
    /* verilator lint_off UNUSEDSIGNAL */
    input [31:0] inst,
    output reg signed [31:0] imm
);
    // ImmGen generate imm value base opcode
    always@(*) begin
        case(inst[6:0])
        // 7'b0010011: // R-Type don't have 
        7'b0010011: imm = {{20{inst[31]}}, inst[31:20]}; // I-Type (Arith)
        7'b0000011: imm = {{20{inst[31]}}, inst[31:20]}; // I-Type (Load)
        7'b0100011: imm = {{20{inst[31]}}, inst[31:25], inst[11:7]}; // S-Type
        7'b1100011: 
                    imm = {{20{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8]}; // B-Type
        7'b1101111: 
                    imm = {{12{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21]}; // J-Type
        7'b1100111: imm = {{20{inst[31]}}, inst[31:20]}; // I-Type (Jump)
        
        default: imm = 32'b0;
        endcase
    end
    
endmodule


