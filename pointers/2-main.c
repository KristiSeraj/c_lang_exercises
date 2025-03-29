#include <stdio.h>

int main() {
    char c = 'A';
    char *p;
    p = &c;

    printf("The value of variable c: %c\n", c);
    printf("The value stored in pointer: %c\n", *p);
    printf("The address of variable x: %p\n", &c);
    printf("The address of pointer: %p\n", p);
    return 0;
}