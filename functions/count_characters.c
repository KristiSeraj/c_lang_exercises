#include <stdio.h>

void count_characters(char str[]) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }
    printf("The string has %d characters\n", count);
}

int main() {
    char word[] = "Hello World";
    count_characters(word);
    return 0;
}