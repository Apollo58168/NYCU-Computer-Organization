# extern int asm_entry(int *arr, int size);

.section .text
.global asm_entry

asm_entry:
    mv t0, x0
    beq a1, x0, done

loop:
    lw t1, 0(a0)        # t1 = a[0]
    xor t0, t0, t1      # t0 = t0 ^ t1
    addi a0, a0, 4
    addi a1, a1, -1
    bne a1, x0, loop

done:
    mv a0, t0

ret
