#include <stdio.h>

int main() {

    // Deklaroni një matricë e tipit INT me dimensione 3x4 dhe me vlera te paracaktuara
    int matrix[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    // Gjeni shumen e vlerave te cdo kolone te matrices
    int sum;
    for(int j=0; j<4; j++){
        sum = 0;
        for (int i = 0; i < 3; i++){
            sum += matrix[i][j];
        }
        printf("Sum[%d] = %d \n",j, sum);
    }

   
}
