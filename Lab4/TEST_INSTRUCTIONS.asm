    .text
    .globl _start
_start:
    addi sp, zero, 0x80       # 設定 sp 為某個地址

    # 儲存返回位址到 stack[0]
    addi t0, zero, 8          # t0 = offset 到 pass_label（從此處 PC = _start + 12）
    jal  x7, dummy            # jal x1, dummy（跳過 return 目標存放處）
ret_target:
    addi a0, zero, 1          # 成功跳轉，設定 a0 = 1
    jal x0, ret_target        # 無限 loop 保持在正確區

dummy:
    # ra = _start + 12 (即 ret_target)，儲存到 sp[0]
    sw   x7, 0(sp)

    # --- 測試開始 ---
    lw   ra, 0(sp)            # 從 memory 把正確跳回位置載入 ra（應為 ret_target）
    jalr x0, ra, 0            # 用 ra 跳回 ret_target（若 hazard stall 正確，會跳）
    # --- 測試結束 ---

fail:
    addi a0, zero, 2          # 若跳失敗，落入這裡（a0 = 0，錯誤路徑）
    jal x0, fail


