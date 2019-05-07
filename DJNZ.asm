           MOV   A, #0       ; A = 0, clear ACC
           MOV   R2, #10     ; load counter R2 = 10
AGAIN:     ADD   A, #05      ; add 05 to ACC
           DJNZ  R2, AGAIN   ; repeat until R2 = 0 
           MOV   R3, A       ; save A in R3