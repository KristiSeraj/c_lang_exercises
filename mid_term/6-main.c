// Declare and populate a square matrix of 10x10 elements.
// Implement a function that takes in input the matrix and returns in output
// an array of 10 elements containing the main diagonal.
#include <stdio.h>
#include <stdlib.h>
int *main_diagonal(int matrix[10][10]) {
    int *arr = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                arr[i] = matrix[i][j];
            }
        }
    }
    return arr;
}
int main() {
    int *arr;
    int matrix[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
        {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
        {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
    };
    arr = main_diagonal(matrix);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}