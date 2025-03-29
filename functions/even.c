#include <stdio.h>

int even(int num) {
    if (num % 2 != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    printf("%d\n", even(6));
    return 0;
}