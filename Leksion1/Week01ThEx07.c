#include <stdio.h>

int main() {

    // Prodhimi i një matrice me një skalar
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int value = 5;

    // Shfaqni permbajtjen e matrices qelize pas qelize
    for (int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            matrix[i][j] = matrix[i][j] * value;
        } 
    }

     // Shfaqni permbajtjen e matrices se ndryshuar
    for (int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("\t%d",matrix[i][j]);
        }   
        printf("\n");
    }
}
