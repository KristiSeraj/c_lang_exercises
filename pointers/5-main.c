//create three functions
//void square(int *num)
//void cube(int *num)
//void negate(int *num)
//print the values 
#include <stdio.h>

void square(int *num) {
    *num *= *num;
}

void cube(int *num) {
    *num *= *num * *num;
}

void negate(int *num) {
    *num = -(*num);
}

int main() {
    int a = 5;
    int b = 5;
    int c = 5;
    square(&a);
    cube(&b);
    negate(&c);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}