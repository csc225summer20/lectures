int* foo() {
    int a2[2];

    /* NOTE: The value of an array is the address of its first value, so this
     *       returns a pointer to the deallocated local variable "a2[0]": */

    return a2;
}

int main(void) {
    int *a1;
    a1 = foo();

    return 0;
}
