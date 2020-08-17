#include <stdlib.h>
#include <stdio.h>

/* To write a function that "creates" a new array: */
int *newArr(int n) {
    /* To allocate space for n integers on the heap: */
    int *arr = (int *)malloc(sizeof(int) * n);

    /* NOTE: Array and pointer syntax is interchangeable, so it is possible to
     *       treat this pointer to heap memory as though it were an array. */

    /* NOTE: A pointer to heap memory can safely be returned; it is not stored
     *       on the runtime stack, and will not be deallocated. */
    return arr;
}

int main(void) {
    int localArr[4];
    int *dynamicArr = newArr(4);

    printf("localArr: %p\n", (void *)localArr);
    printf("dynamicArr: %p\n", (void *)dynamicArr);

    /* NOTE: Since "dynamicArr" was manually allocated, it must also be
     *       manually deallocated: */
    free(dynamicArr);

    return 0;
}
