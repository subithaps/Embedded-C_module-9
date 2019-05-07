	     MOV A, #0     ; A = 0
         MOV R1, A     ; R1 = 0
         ADD A, #50H   ; A = 0 + 50H = 50H
         JNC NEXT      ; if CY = 0 execute instructions from 
		               ; the address of the label NEXT 
					   ; to add the next number
         INC R1        ; if CY = 1 increment R1
NEXT:    ADD A, #0F9H  ; A = 50H + 0F9H =   CY = 1
         JNC OVER      ; jump if CY = 0
         INC R1        ; if CY = 1 increment R1(R1 = 1)
OVER:    MOV R2, A     ; R2 = 49H and R1 = 1
         END