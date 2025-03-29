#include <stdio.h>
#define N 4
#define M 3

int main() {
    int matrix[N][M] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int idx_1, idx_2, temp;
    printf("Enter two indexes to swap values: ");
    scanf("%d, %d", &idx_1, &idx_2);

    if (idx_1 < N && idx_2 < N) {
        for (int i = 0; i < M; i++) {
                temp = matrix[idx_1][i];
                matrix[idx_1][i] = matrix[idx_2][i];
                matrix[idx_2][i] = temp;
            }
    } else {
        printf("Could not swap values because index does not exist\n");
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
