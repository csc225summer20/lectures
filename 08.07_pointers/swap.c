#include <stdio.h>

void swap(int*, int*);

int main(void) {
    int z = 1, w = 2;

    /* Instead of passing two integers, pass two pointers indicating where in
     * memory those integers can be found: */
    swap(&z, &w);

    printf("z: %d, w: %d\n", z, w);
}

/* Instead of taking two integers, take two pointers indicating where in
 * memory two integers can be found: */
void swap(int *x, int *y) {
    int temp = *x;  /* Get the value to which "x" points. */

    *x = *y;        /* Set the value to which "x" points equal to the value
                     *  to which "y" points. */

    *y = temp;      /* Set the value to which "y" points equal to the value
                     *  to which "x" originally pointed. */
}
