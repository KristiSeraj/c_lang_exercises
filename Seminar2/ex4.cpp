//Given a square matrix, check that the values of the two diagonals are the same.
//Get the values form the user
#include <stdio.h>
int main() {
	int N=3,i,j;
    int matrix[N][N];
    //populate the matrix
  for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	{
    		printf("[%d][%d]:",i,j);
    		scanf("%d",&matrix[i][j]);
		}
	}
	
	 for(i=0;i<N;i++)
    {
    	for(j=0;j<N;j++)
    	{
    		printf("%d ",matrix[i][j]);
    		
		}
		printf("\n");
	}

    int isSame = 1; // Flag to check if diagonals are the same
    
    for (int i = 0; i < N; i++) {
        if (matrix[i][i] != matrix[i][N - 1 - i]) {
            isSame = 0;
            break;
        }
    }

    if (isSame==1) {
        printf("Both diagonals have the same values.\n");
    } else {
        printf("Diagonals have different values.\n");
    }

    return 0;
}
