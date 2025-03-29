#include <stdio.h>

int main() {

    // Deklaroni një matricë e tipit INT me dimensione 4x4 dhe popullojeni me vlera fikse
    int matrix[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    // Ndajeni matrices ne 4 pjese 2x2 
    int new_matrix[4][2][2];
    int new_i, new_j, k;

    for (int i = 0; i<4; i++){
        for(int j=0; j<4; j++){

            if(i <=1 && j<=1){
                k = 0; new_i = i; new_j = j;
            }
            else if (i <=1 && j>1)
            {
                k = 1; new_i = i; new_j = j-2;
            }
            else if (i > 1 && j<=1)
            {
                k = 2; new_i = i-2; new_j = j;
            }
            else{
                k = 3; new_i = i-2; new_j = j-2;
            }
            
            new_matrix[k][new_i][new_j] = matrix[i][j];
           
        }
    }

    for (int k = 0; k<4; k++){
        for (int i = 0; i<2; i++){
            for(int j=0; j<2; j++){
                printf("Matrix[%d][%d][%d] = %d \n",k,i,j,new_matrix[k][i][j]);
            }
        }
    }

   
    

}
