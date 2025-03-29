//Given a square matrix, check that the values of the two diagonals are the same.
//Get the values form the user
#include <stdio.h>

int main() {
    int N = 3;
    int matrix[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("[%d] [%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (((i + j) == (N - 1)) || (i == j)) {
                printf("%d", matrix[i][j]);
            }
            printf("  "); 
        }
        printf("\n");
    }
    return 0;
}