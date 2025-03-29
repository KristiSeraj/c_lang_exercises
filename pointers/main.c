#include <stdio.h>

int main() {
    int a = 24;
    int *p;
    p = &a;

    printf("The value of a: %d\n", a);
    printf("The address of the pointer p: %p\n", p);
    printf("The value stored in the pointer %d\n", *p);
    printf("The address of the variable is: %p\n", &a);
    return 0;
}