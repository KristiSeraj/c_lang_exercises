// Declare an array of characters.
// Populate the array via “scanf” function.
// Implement a function named “sizeof” that takes in input the array and
// returns the number of characters stored in the array. (HINT: pay attention to the ‘\0’ character). 
#include <stdio.h>
int size_of(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        i++;
    }
    return i;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The string entered: %s\n", str);
    int c = size_of(str);
    printf("This string has %d characters\n", c);
    return 0;
}