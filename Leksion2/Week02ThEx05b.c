#include <stdio.h>

int main() {

    // Deklaroni një ndryshor qe perfaqeson dimesionin e nje matrice katrore
    int n;

    // Popullojeni vleren nga perdoruesi
    printf("Jepni vleren e dimensionit:");
    scanf("%d",&n);

    // Kontrolloni nese dimensioni eshte nje numer cift
    if(n%2==0){

        int matrix[n][n];

        // Populloni matricen me vlera
        for (int i = 0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("Jepni vleren [%d][%d]:",i,j);
                scanf("%d",&matrix[i][j]);
            }
        }


        for (int i = 0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("User matrux [%d][%d] = %d \n",i,j,matrix[i][j]);
            }
        }

        // Deklaroni matricen e re
        int dim_sub_matrix = n/2;
        int new_matrix[4][dim_sub_matrix][dim_sub_matrix];
        int new_i, new_j, k;

        // Ndani matricen ne 4 pjese
        for (int i = 0; i<n; i++){
            for(int j=0; j<n; j++){
    
                if(i < dim_sub_matrix && j< dim_sub_matrix){
                    k = 0; new_i = i; new_j = j;
                }
                else if (i < dim_sub_matrix && j>=dim_sub_matrix)
                {
                    k = 1; new_i = i; new_j = j-dim_sub_matrix;
                }
                else if (i >= dim_sub_matrix && j<dim_sub_matrix)
                {
                    k = 2; new_i = i-dim_sub_matrix; new_j = j;
                }
                else{
                    k = 3; new_i = i-dim_sub_matrix; new_j = j-dim_sub_matrix;
                }
                
                new_matrix[k][new_i][new_j] = matrix[i][j];
               
            }
        }

        // Shfaqni matricat e ndara
        for (int k = 0; k<4; k++){
            for (int i = 0; i<dim_sub_matrix; i++){
                for(int j=0; j<dim_sub_matrix; j++){
                    printf("Matrix[%d][%d][%d] = %d \n",k,i,j,new_matrix[k][i][j]);
                }
            }
        }
    }
    
}
