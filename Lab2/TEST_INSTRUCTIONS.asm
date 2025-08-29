        .text
main:
    addi sp, zero, 128     # 將 stack pointer 設定為 4096

    addi t1, zero, 0        # t1 = previous Fibonacci = 0
    addi t2, zero, 1        # t2 = current Fibonacci = 1
    sw t1, 0(sp)            # 將 0 存入位置 sp (fib[0])
    sw t2, 4(sp)            # 將 1 存入位置 sp+4 (fib[1])

    addi t3, zero, 2        # t3 = index，從 2 開始
    addi t4, zero, 8       # t4 = Fibonacci 計算數量 (15)

loop:
    beq t3, t4, exit        # 當 index == 15 時結束迴圈

    add t5, t1, t2          # t5 = t1 + t2，計算下一個 Fibonacci 數

    add t6, t3, t3          # t6 = 2 * index
    add t6, t6, t6          # t6 = 4 * index (計算偏移量)
    add t6, sp, t6          # t6 = sp + (4 * index)，得到存放位置

    sw t5, 0(t6)            # 將 t5 存入 fib_array[index]

    add t1, t2, zero        # 更新：previous = current
    add t2, t5, zero        # 更新：current = next

    addi t3, t3, 1          # index 加 1

    beq zero, zero, loop    # 無條件跳回迴圈起點

exit:
    beq zero, zero, exit    # 進入無窮迴圈，模擬程式結束
