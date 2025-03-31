// Declare a pointer of int type.
// Allocate the space with the function “malloc” for 100 elements.
// Create a function named “populate” that takes in input the pointer,
// prompt the user to enter positive values. Stop if a negative value is entered.
// Return the number of values entered by the user.
#define SIZE 100
#include <stdio.h>
#include <stdlib.h>
int populate(int *ptr) {
    int count = 0, value;
    printf("Enter only positive numbers (program stops when negative number is added)\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &value);
        if (value < 0) {
            break;
        }
        ptr[count++] = value;
    }
    return count;

}
int main() {
    int *p = malloc(SIZE * sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    int count = populate(p);
    printf("Number of values added: %d\n", count);
    free(p);
    return 0;
}