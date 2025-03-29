#include <stdio.h>

int main() {

    // Prodhimi i dy matricave
    int MA[2][3] = {{1,2,3},{4,5,6}};
    int MB[3][4] = {{11,12,13,14},{15,16,17,18},{19,20,21,22}};
    int MC[2][4];

    int sum;

    // Shfaqni permbajtjen e matrices qelize pas qelize
    for (int i = 0; i<2; i++){
        for(int j=0; j<4; j++){
            sum = 0;
            for(int k=0; k<3; k++){
                sum += (MA[i][k] * MB[k][j]);
            }
            MC[i][j] = sum;
        } 
    }

     // Shfaqni permbajtjen e matrices se ndryshuar
    for (int i = 0; i<2; i++){
        for(int j=0; j<4; j++){
            printf("\t%d",MC[i][j]);
        }   
        printf("\n");
    }
}
