#include <stdio.h>

int main() {

    // Deklaroni një matricë e tipit INT me dimensione 5x5 dhe popullojeni me vlera fikse
    int matrix[5][5] = {{1,0,0,0,1}, {0,1,0,0,0}, {0,0,1,0,0}, {0,0,0,1,0}, {0,0,0,0,1}};

    // Kontrolloni nese matrica eshte diagonale e siperme. 
    int isUpperOK = 0;
    int isLowerOK = 1;

    // 
    for (int i = 0; i<5; i++){
        for(int j=0; j<5; j++){

            // Pjesa siper ka te pakten nje vlere > 0
            if( (i < j && matrix[i][j] != 0)){
                isUpperOK = 1;
            }

            // Pjesa poshtme ka nje vlere != zero
            if( (j < i && matrix[i][j] != 0)){
                isLowerOK = 0;
            }
        }
    }

    if (isUpperOK && isLowerOK)
        printf("Matrica eshte diagonale e siperme!\n");
    else
        printf("Matrica NUK eshte diagonale e siperme!\n");
    

}
