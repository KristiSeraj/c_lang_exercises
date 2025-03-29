#include <stdio.h>

int main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 5;

    printf(" x = %d\\n", x);
    printf(" *ptr = %d\\n", *ptr);

    *ptr += 12;
    printf(" x  = %d\\n", x);
    printf(" *ptr = %d\\n", *ptr);

    (*ptr)++;
    printf(" x = %d\\n", x);
    printf(" *ptr = %d\\n", *ptr);

   
}

