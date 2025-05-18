addi x6, x0, 11     # x6 = n
addi x3, x0, 1      # x3 = F(1)
addi x4, x0, 0      # x4 = F(0)
addi x5, x0, 2      # i = 2

fib_loop:
    bgt  x5, x6, fib_done  # 如果 i > n 就結束（注意 bgt 是 pseudo-instruction）
    add  x2, x3, x4        # x2 = F(i)
    add  x4, x3, x0        # x4 = F(i-1)
    add  x3, x2, x0        # x3 = F(i)
    addi x5, x5, 1         # i++
    jal  x0, fib_loop

fib_done:
    jal x0, fib_done
