#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    int sumValue = sum(a, b);
    printf("The sum of %d+%d=%d\n", a, b, sumValue);
    return 0;
}