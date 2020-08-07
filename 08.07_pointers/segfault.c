#include <stddef.h>

int main(void) {

    /* This MAY OR MAY NOT crash -- the value of "ptr" is unknown, and it could
     *  by chance contain a valid address.
     *
     *  int *ptr;
     *  *ptr = 2;
     *
     */

    /* This is guaranteed to crash -- NULL is NEVER a valid address.
     *
     *  int *ptr = NULL;
     *  *ptr = 2;
     *
     */

    /* Pointers should always be initialized, to NULL if unknown: */
    int *ptr = NULL;

    /* If it is possible for a pointer to be NULL, we should check first: */
    if (ptr != NULL) {
        *ptr = 2;
    }

    return 0;
}
