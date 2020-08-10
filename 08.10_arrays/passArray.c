void foo(int a2[]) {

    /* NOTE: The value of an array is the address of its first element, so this
     *       modifies "a1" within "main": */

    a2[0] = 5;
}

int main(void) {
    int a1[2];
    foo(a1);

    return 0;
}
