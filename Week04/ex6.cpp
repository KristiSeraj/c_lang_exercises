//create three functions
//void square(int *num)
//void cube(int *num)
//void negate(int *num)
//print the values 

#include <stdio.h>

// Function prototypes
void square(int *num);
void cube(int *num);
void negate(int *num);

int main() {
    int x = 5;

    // Demonstrate squaring a number using a pointer
    printf("Original number: %d\n", x);
    square(&x);
    printf("After squaring: %d\n", x);

    // Demonstrate cubing a number using a pointer
    printf("\nOriginal number: %d\n", x);
    cube(&x);
    printf("After cubing: %d\n", x);

    // Demonstrate negating a number using a pointer
    printf("\nOriginal number: %d\n", x);
    negate(&x);
    printf("After negating: %d\n", x);

    return 0;
}

// Function to square a number using a pointer
void square(int *num) {
    *num *= *num;
}

// Function to cube a number using a pointer
void cube(int *num) {
    *num *= (*num) * (*num);
}

// Function to negate a number using a pointer
void negate(int *num) {
    *num = -(*num);
}

