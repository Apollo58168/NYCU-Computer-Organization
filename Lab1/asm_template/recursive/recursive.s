# extern int fibo_asm(int term)

.section .text
.global fibo_asm

fibo_asm:
    # save e, fibo_asm(e-1), retuen address
    addi    sp, sp, -16
    sw      a0, 0(sp)
    sw      s0, 4(sp)
    sw      ra, 8(sp)

    # if(e==0)
    li      t0, 0
    beq     a0, t0, equal0
    # else if(e==1)
    li      t0, 1
    beq     a0, t0, equal1

    # else
    # calculate fibo_asm(e-1)
    lw      t2, 0(sp)
    addi    a0, t2, -1
    jal     ra, fibo_asm
    mv      s0, a0 # s0 = fibo_asm(e-1)

    # calculate fibo_asm(e-2)
    lw      t2, 0(sp)
    addi    a0, t2, -2
    jal     ra, fibo_asm

    add     a0, a0, s0
    j       end_fibo

# return 0;
equal0:
    li      a0, 0
    j       end_fibo
# return 1;
equal1:
    li      a0, 1
    j       end_fibo

end_fibo:
    lw      ra, 8(sp)
    lw      s0, 4(sp)
    addi    sp, sp, 16
    jr      ra

    ret
