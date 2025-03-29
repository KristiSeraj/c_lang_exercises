//creat a functtion addOne(int *num)
//swap(int *a,int *b)
//the variables are declared in the main function
//print the values 
#include <stdio.h>

void addOne(int *num) {
    (*num)++;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 47;
    int y = 20;
    printf("%d %d\n", x, y);
    addOne(&x);
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}