#include <stdio.h>

int main() {

    // Deklaroni një matricë e tipit INT me dimensione 3x3 dhe popullojeni me vlera fikse
    int matrixA[3][3] = {{1,2,3}, {4,5,6},{7,8,9}};

    // Deklaroni një matricë e tipit INT me dimensione 5x5 dhe popullojeni me vlera fikse
    int matrixB[3][3] = {{1,2,3}, {4,5,6},{7,8,19}};

    // Kontrolloni nese dy matricat jane identike, pra, kane te njejtat vlera
    int equal = 1; // Supozojme qe matricat jane te njejta

    for (int i = 0; i<3 && equal == 1; i++){
        for(int j=0; j<3; j++){
            if(matrixA[i][j] != matrixB[i][j]){
                equal = 0;
                break;
            }
        }
    }

    if (equal)
        printf("Dy matricat jane te njejta!\n");
    else
        printf("Dy matricat jane te ndrshme!\n");
    

}
