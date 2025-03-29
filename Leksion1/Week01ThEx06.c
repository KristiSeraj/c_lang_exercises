#include <stdio.h>

int main() {

    // Deklaroni një matricë e tipit CHAR me dimensione 5x50
    char matrix[5][50];

    // Popullojeni me vlera nga perdoruesi duke percjelle nje mesazh per cdo rresht
    for (int i = 0; i<5; i++){   
        printf("Jep rreshtin me index %d:", i);
        scanf("%s",matrix[i]);
    }

    // Shfaqni permbajtjen e matrices rresht pas rreshti
    for (int i = 0; i<5; i++){
        printf("%s \n", matrix[i]);
    }

     // Shfaqni permbajtjen e matrices qelize pas qelize
    for (int i = 0; i<5; i++){
        for(int j=i; j<50; j++){
            printf("%c",matrix[i][j]);
        }   
        printf("\n");
    }
}
