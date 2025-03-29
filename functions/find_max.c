#include <stdio.h>

int find_max(int arr[], int size) {
    int max_value = arr[0], i;
    for (i = 0; i < size; i++) {
        if (max_value < arr[i]) {
            max_value = arr[i];
        }
    }
    return max_value;
}

int main() {
    int arr[5] = {20, 6, 10, 1, 2};
    printf("Max value of arr is %d\n", find_max(arr, 5));
    return 0;
}