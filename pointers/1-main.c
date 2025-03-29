#include <stdio.h>

void fun(int *ptr) {
    *ptr = 25;
}

int main() {
    int y = 30;
    fun(&y);
    printf("%d\n", y);
    return 0;
}