#include <stdio.h>

int main() {

    // Deklaroni një matricë e tipit INT me dimensione 3x4 dhe me vlera te paracaktuara
    int matrix[5][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}, {21,22,23,24,25}};

    // Shfaqni vlerat e trekendeshit mbi diagonalen kryesore
    int sum;
    for (int i = 0; i<5; i++){
        for(int j=i; j<5; j++){
            printf("%d ",matrix[i][j]);
        }   
        printf("\n");
    }
}
