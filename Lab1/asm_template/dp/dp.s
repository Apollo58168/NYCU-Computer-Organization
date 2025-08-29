# extern void entry(int *arr, int t, int *arr2)

.section .text
.global asm_dp

asm_dp:
    li s1, 0 # s1 = i = 0

init_loop:
    bgt s1, a1, init_done

    slli t0, s1, 2 # t0 = s1 << 2
    add t0, t0, a2

    # dp[0] = 0
    sw x0, 0(t0)

    # i++
    addi s1, s1, 1
    j init_loop

init_done:
    li s1, 1

outer_loop:
    # i < t done
    bgt s1, a1, dp_done

    # j from 0 to 5
    li s2, 0

inner_loop:
    # if j >= 6, jump to next_i (end of j loop)
    li t0, 6
    bge s2, t0, next_i

    # length = arr[j*2]
    # reward = arr[j*2+1]

    # t1 = j*2*4, every pair has two int(4 byte)
    slli t1, s2, 3
    # t2 = arr + t1
    add t2, a0, t1

    # length = arr[j*2]
    lw t3, 0(t2)
    # reward = arr[j*2+1]
    lw t4 ,4(t2)

    # if ( i - length ) < 0) continue
    blt s1, t3, skip_update

    # ---------------------
    # int sum = dp_array[i-length] + reward
    # ---------------------
    # i - length
    sub t5, s1, t3

    # find &dp_array[t5]
    slli t5, t5, 2
    add t5, t5, a2

    # dp_array[i-length]
    lw t6, 0(t5)

    # sum = dp_array[i-length] + reward
    add t6, t6, t4

    # ---------------------
    # if ( dp_array[i] < sum ) { dp_array[i] = sum; }
    # ---------------------
    # &dp_array[i] = a2 + i*4
    slli s3, s1, 2
    add s3, s3, a2

    # dp_array[i]
    lw s4, 0(s3)

    # if( dp_array[i] >= sum ) skip
    bge s4, t6, skip_update

    # dp_array[i] = sum;
    sw t6, 0(s3)

# j++
skip_update: 
    addi s2, s2, 1
    j inner_loop

# i++
next_i: 
    addi s1, s1, 1
    j outer_loop

dp_done:

    ret

