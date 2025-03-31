// Declare and initialize a list of integers.
// The size of the list is prompted by the user.
// Implement e function named “split_array” that creates two arrays from the original 
// one populating the one with the first half elements of the original array and the second one
// with the values of the second half.
#include <stdio.h>

void split_array(int n, int src_list[n], int first_half[], int second_half[]) {
    int mid = n / 2;

    for (int i = 0; i < mid; i++) {
        first_half[i] = src_list[i];
    }
    for (int i = mid; i < n; i++) {
        second_half[i - mid] = src_list[i];
    }
}

int main() {
    int size;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    int mid = size / 2;

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

    int first_half[mid], second_half[size - mid];
    split_array(size, arr, first_half, second_half);

    printf("First half: \n");
    for (int i = 0; i < mid; i++) {
        printf("%d ", first_half[i]);
    }
    printf("\n");

    printf("Second half: \n");
    for (int i = 0; i < size - mid; i++) {
        printf("%d ", second_half[i]);
    }
    printf("\n");
    return 0;
}