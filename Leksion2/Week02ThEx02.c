#include <stdio.h>

int main() {

    // Deklaroni një matricë e tipit INT me dimensione 5x5 dhe popullojeni me vlera fikse
    int matrix[5][5] = {{1,0,0,0,1}, {0,1,0,0,0}, {0,0,1,0,0}, {0,0,0,1,0}, {0,0,0,0,1}};

    // Kontrolloni nese matrica eshte identitet I (te gjitha vlerat jane 0 pervec diaginales krzesore qe eshte 1)
    int unit = 1; // Supozojme qe matrica 

    for (int i = 0; i<5 && unit == 1; i++){
        for(int j=0; j<5; j++){
            if( (i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)){
                unit = 0;
                break;
            }
        }
    }

    if (unit)
        printf("Matrica eshte unitare!\n");
    else
        printf("Matrica NUK eshte unitare!\n");
    

}
