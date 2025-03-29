#include <stdio.h>

void pointer() {
    int a = 20;
    int *p;
    p = &a;

    printf("The address of the pointer %p\n", p);
    printf("The value of the variable a %d\n", a);
    printf("The values stored in the pointer %d\n", *p);
}

int main() {
    pointer();
    return 0;
}