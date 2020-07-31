/* Use information in "stdio.h" (which includes information needed to call
 * the printf function): */
#include <stdio.h>

/* Find and replace all instance of "PI" with "3.14": */
#define PI 3.14

int main(void) {
    /* NOTE: The following does not compile; this expands to to
     *       "3.14 = 3.14159265;", which is nonsensical: */ 
    /* PI = 3.14159265; */

    printf("The value of PI is: %f\n", PI);

    return 0;
}
