#include <stdio.h>

int main() {

    // Deklaroni një matricë e tipit INT me dimensione 3x4
    int matrix[3][4];

    // Populloni vlerat e matrices nga perdoruesi
    for (int i = 0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("Jepni vleres matrix[%d][%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Afishoni ne OUTPUT permbajtjen e matrices
    for (int i = 0; i < 3; i++){
        for(int j=0; j<4; j++){
            printf("Matrix[%d][%d] = %d \n",i, j, matrix[i][j]);
        }
    }
}
