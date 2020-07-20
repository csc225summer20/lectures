        .ORIG x3000
MAIN    JSR FOO
        HALT

FOO     JSR BAR
        RET

BAR     RET
        .END
