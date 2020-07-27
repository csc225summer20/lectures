; Respond to keyboard interrupts.
; NOTE: Bit 14, 0xFE00, must be set to '1',
;       and location 0x0180 must be set to 0x0300.

        .ORIG x300      ; Define service routines inside the OS.
KBISR   ST R0, SAVER0   ; NOTE: ALL registers are callee-save, because there is
        ST R1, SAVER1   ;       effectively no caller.

        LDI R1, KBDR    ; NOTE: There is no need to poll the KBSR; the only way
                        ;       for this service routine to be called is if the
                        ;       user has already typed a character.
        LEA R0, MSG
        PUTS
        ADD R0, R1, #0
        OUT
        LEA R0, END
        PUTS

        LD R1, SAVER1
        LD R0, SAVER0

        RTI             ; Return to the interrupted program.

MSG     .STRINGZ "You typed: "
END     .STRINGZ "\n"
KBDR    .FILL xFE02
SAVER0  .FILL x0000
SAVER1  .FILL x0000
        .END
