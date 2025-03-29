//Create a square matrix and populate it with values ??to create a
//lower triangular matrix.
//The matrix dimension and values ??are provided by the user.
//The code should be structured to only allow the allowed cells to be populated.
#include<stdio.h>
int main() {
    int n,i,j;

    
    printf("give the matrix parameter:");
    scanf("%d",&n);
	int m=n;
  //declare a matrix with all elementsto be 0
	int matrix[n][n]={0};
    // Populate the matrix
    for ( i = 0; i < n; i++) {
        for ( j = 0; j <=i ; j++) { 
            printf("Element [%d][%d]: ", i, j);
            scanf("%d",&matrix[i][j]);
        }
        
    }

    // Print the matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    
}

