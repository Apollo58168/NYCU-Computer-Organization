# 初始值設定
addi t1, t0, 10     # t1 = 10
addi t2, t0, 20     # t2 = 20
nop
nop
nop
nop
nop
# 算術邏輯測試
add  t3, t1, t2     # t3 = 10 + 20 = 30
sub  t4, t2, t1     # t4 = 20 - 10 = 10
and  t5, t1, t2     # t5 = 10 & 20 = 0
or   t6, t1, t2     # t6 = 10 | 20 = 30