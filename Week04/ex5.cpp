//creat a functtion addOne(int *num)
//swap(int *a,int *b)
//the variables are declared in the main function
//print the values 
#include <stdio.h>

// Function prototypes
void addOne(int *num);
void swap(int *a, int *b);

int main() {
    int x = 5;
    int y = 10;


    printf("Before adding one: x = %d\n", x);
    addOne(&x);
    printf("After adding one: x = %d\n", x);

  
    printf("\nBefore swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}


void addOne(int *num) {
    (*num)++;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

