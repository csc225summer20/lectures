        .ORIG x3000
MAIN    JSR FOO     ; 1. MAIN calls FOO.
        HALT        

FOO     ST R7, SAVER7
        JSR BAR     ; 2. FOO calls BAR.
        LD R7, SAVER7
        RET         ; 4. FOO returns to MAIN.

SAVER7  .FILL x0000

BAR     RET         ; 3. BAR returns to FOO.
        .END
