        .ORIG x3000

        ; Place args into R0 and R1.
        ST R7, SAVER7   ; Save R7 -- optional.
        JSR SUB
        LD R7, SAVER7   ; Restore R7 -- optional.
        ; Again:
        ST R7, SAVER7   ; Save R7 -- optional.
        JSR SUB
        LD R7, SAVER7   ; Restore R7 -- optional.
        ; Do something with the result in R2.

        HALT

SAVER7  .FILL x0000     ; Space to save R7.


; Subtracts one integer from another.
;  Takes the minuend in R0 and the subtrahend in R1.
;  Returns the difference in R2.
SUB     ST R3, SAVER3   ; Save R3.
        NOT R3, R1      ; Negate R1.
        ADD R3, R3, #1
        ADD R2, R0, R3  ; Add -R1 to R0.
        LD R3, SAVER3   ; Restore R3.
        RET             ; Return.

SAVER3  .FILL x0000     ; Space to save R3.

        .END
