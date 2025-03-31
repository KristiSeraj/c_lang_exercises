// Declare and initialize a list of integers.
// The size of the list is prompted by the user.
// Implement e function named “find_all” that calculates and returns by
// reference min, max and average value.
#include <stdio.h>

void find_all(int size, int arr[size], int *min, int *max, int *avg) {
    *min = *max = arr[0];
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        if (*min < arr[i]) {
            *min = arr[i];
        }
        if (*max > arr[i]) {
            *max = arr[i];
        }
        *avg = sum / size;
    }
}
int main() {
    int size, min, max, avg;
    printf("Enter the size of array\n");
    scanf("%d", &size);

    // Populate the array
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print whole array
    printf("The whole array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find max, min, avg of array
    find_all(size, arr, &min, &max, &avg);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Avg: %d\n", avg);
    return 0;
}