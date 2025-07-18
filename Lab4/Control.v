module Control (
    input [6:0] opcode,
    input [2:0] funct3,
    input BrEq,
    input BrLT,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite,
    output reg [1:0] PCSel,
    output reg Flush_ctrl,
    output reg PCorR1
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    reg [11:0] ctrl;
    assign {PCSel, memRead, memtoReg, ALUOp, memWrite, ALUSrc, regWrite, Flush_ctrl, PCorR1} = ctrl;

    always@(*) begin
        case(opcode)
            7'b0110011: ctrl = 12'b00_0_00_10_0_0_1_0_0; // R-Type
            7'b0010011: ctrl = 12'b00_0_00_11_0_1_1_0_0; // I-Type (Arith)
            7'b0000011: ctrl = 12'b00_1_01_00_0_1_1_0_0; // I-Type (Load)
            7'b0100011: ctrl = 12'b00_0_00_00_1_1_0_0_0; // S-Type
            
            7'b1100011: begin // B-Type
                case(funct3)
                    3'b000: if(BrEq == 1) ctrl = 12'b01_0_xx_00_0_0_0_1_0;
                            else          ctrl = 12'b00_0_xx_00_0_0_0_0_0;          // beq
                    3'b001: if(BrEq == 0) ctrl = 12'b01_0_xx_00_0_0_0_1_0;
                            else          ctrl = 12'b00_0_xx_00_0_0_0_0_0;          // bne
                    3'b100: if(BrLT == 1) ctrl = 12'b01_0_xx_00_0_0_0_1_0;
                            else          ctrl = 12'b00_0_xx_00_0_0_0_0_0;          // blt
                    3'b101: if(BrLT == 0) ctrl = 12'b01_0_xx_00_0_0_0_1_0;
                            else          ctrl = 12'b00_0_xx_00_0_0_0_0_0;          // bge
                    default: ctrl = 12'bxxxxxxxxxxxx;
                endcase
            end
            7'b1101111: ctrl = 12'b01_0_10_00_0_0_1_1_0; // J-Type
            7'b1100111: ctrl = 12'b01_0_10_00_0_1_1_1_1; // I-Type (Jump)
            
            default: ctrl = 12'bxxxxxxxxxxxx;

        endcase
    end


endmodule


