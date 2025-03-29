#include <stdio.h>

int main() {

    // Deklaroni një matricë e tipit INT me dimensione 5x5 dhe popullojeni me vlera fikse
    int matrix[5][5] = {{1,2,3,4,5}, {2,6,7,8,9}, {3,7,10,11,12}, {4,8,11,13,14}, {5,9,12,16,15}};

    // Kontrolloni nese matrica eshte simetrike. 
    int simeteike = 1; // Supozojme qe matrica eshte simetrike

    // 
    for (int i = 0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if( (matrix[i][j] != matrix[j][i])){
                simeteike = 0;
            }
        }
    }

    if (simeteike)
        printf("Matrica eshte simetrike!\n");
    else
        printf("Matrica NUK eshte simetrike!\n");
    

}
