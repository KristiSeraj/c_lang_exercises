#include <stdio.h>

void print_array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int a[5] = { 5, 10, 20, 30, 40 };
    print_array(a, 5);
    return 0;
}