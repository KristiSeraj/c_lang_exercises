//Create a fixed-value NxM matrix. 
//Ask the user index of two rows, indices whose data will be swapped with each other. 
//For example, if the users values are "1" and "3", 
//then the values of the second row (with index 1) will be swapped with the values 
//of the fourth row (with index 3). The user should check that the values 
//are not the same and do exist 

#include <stdio.h>
int main() {
	int N=4,M=5,row1, row2;
    int matrix[N][M] = {
        {41, 0, 8, 4, 15},
        {11,6,58,10,3},
        {11, 92, 2, 14, 1},
        {45, 32, 50, 0, 100}
    };

  
    printf("Original Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Get row indices from user
    printf("Enter two row indices to swap (0 to %d): ", N - 1);
    scanf("%d %d", &row1, &row2);

    // Validate input
    if (row1 >= 0 && row1 < N && row2 >= 0 && row2 < N) {
    	//check if the rows are equal
    	if(row1!=row2){
    	 for (int j = 0; j < M; j++) {
            int temp = matrix[row1][j];
            matrix[row1][j] = matrix[row2][j];
            matrix[row2][j] = temp;
        }

        printf("\nMatrix after swapping row %d and row %d:\n", row1, row2);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }	
		}
		else
		{
			printf("Can not swap rows,Same row index!");
		}
       
    } else {
        printf("Invalid indices! Please enter values between 0 and %d.\n", N - 1);
    }

   
}

