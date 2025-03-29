#include <stdio.h>

int count_vowels(char str[]) {
    int count = 0, i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E'
            || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O'
            || str[i] == 'u' || str[i] == 'U' || str[i] == 'y' || str[i] == 'y') {
            count++;
        }
    }
    return count;
}

int main() {
    int c = count_vowels("Everyone");
    printf("The string has %d vowels\n", c);
    return 0;
}