#include <stdio.h>

int main() {

    // Deklaroni një matricë e tipit INT me dimensione 3x4 dhe me vlera te paracaktuara
    int matrix[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    // Afishoni ne OUTPUT permbajtjen e matrices
    for (int i = 0; i < 3; i++){
        for(int j=0; j<4; j++){
            printf("Matrix[%d][%d] = %d \n",i, j, matrix[i][j]);
        }
    }
}
