         ORG 0
BACK:    MOV A, #20H    ; load A with 20H
         MOV P1, A      ; move 20H to port 1
	     LCALL DELAY    ; delay
	     MOV A, #46H    ; load A with 46H
	     MOV P1,A       ; move 46H to port 1
	     LCALL DELAY
	     SJMP BACK	    ; indefinitely runs above instructions	 
; delay subroutine
         ORG 300H       ; time delay at address 300H
DELAY:	 MOV R1, #0FFH  ; counter R1= 255
AGAIN:	 DJNZ R1, AGAIN ; decrements counter by 1 until R1 = 0
         RET            ; return to caller
		 END            ; end of file