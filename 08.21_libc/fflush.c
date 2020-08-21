#include <stdio.h>
#include <unistd.h>

int main(void) {
    printf("Hello,");

    /* NOTE: By default, the above will not appear until a newline is printed
     *       or the program ends. This can be circumvented: */
    fflush(stdout);

    sleep(1);
    printf(" world!\n");

    return 0;
}
