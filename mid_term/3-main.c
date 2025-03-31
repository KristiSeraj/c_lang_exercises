// Declare a list of integers.
// The number of the values to be stored is not known so the size of the array is a default value 100.
// Create a function named “populate” that takes in input the array,
// prompt the user to enter positive values. Stop if a negative value is entered.
// Return the number of values entered by the user.
#define SIZE 100
#include <stdio.h>
int populate(int arr[]) {
    int count = 0, value;
    printf("Enter positive values (entering negative values will stop the program): ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &value);
        if (value < 0) {
            break;
        }
        arr[count++] = value;
    }
    return count;

}
int main() {
    int arr[SIZE];
    int count = populate(arr);
    printf("Number of values added: %d\n", count);
    return 0;
}