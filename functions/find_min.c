#include <stdio.h>

int find_min(int arr[], int size) {
    int min_value = arr[0], i;
    for (i = 0; i < size; i++) {
        if (min_value > arr[i]) {
            min_value = arr[i];
        }
    }
    return min_value;
}

int main() {
    int arr[5] = {20, 6, 10, 1, 2};
    printf("Min value of arr is %d\n", find_min(arr, 5));
    return 0;
}