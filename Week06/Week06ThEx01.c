#include <stdio.h>
#include <stdlib.h>

/*  Funksione krahason dy kohe t1 dhe t2. Kthen:
 *  - 1 nese t1 > t2
 *  - 2 nese t1 < t2
 *  - 0 nese t1 == t2
 */
int comparetime(int t1[3], int t2[3]){
    if (t1[0] > t2[0]){
        return 1;
    }
    else if(t1[0] < t2[0]){
        return 2;
    }
    else{
        if (t1[1] > t2[1]){
            return 1;
        }
        else if(t1[1] < t2[1]){
            return 2;
        }
        else{
            if (t1[2] > t2[2]){
                return 1;
            }
            else if(t1[2] < t2[2]){
                return 2;
            }
            else{
                return 0;
            }
        }
    }
}

/*  Funksioni gjen dhe kthen ne outout indeksin e rreshtit me vleren e kohes me te larte.
 */
int findmax(int n, int matrix[n][3]){

    int max = 0;
    for(int i = 1; i < n; i++){
        if(comparetime(matrix[max], matrix[i]) == 2){
            max = i;
        }
    }
    return max;
}

/*  Funksione kontrollon nese vlerat e @value ndodhen ne matricen @matrix. Kthen indeksin e rreshit te gjetur ose -1.
 */
int findidx(int n, int matrix[n][3], int value[3]){
    int index = -1;

    for(int i = 0; i < n; i++){

        if (comparetime(matrix[i], value) == 0){
            index = i;
            break;
        }
    }

    return index;
}


int main(){

    int matrix[4][3] = {{2,20,10},{5,37,00}, {3,15,00}, {3,15,05}};
    int value[3] = {3,15,05};
    int idx;

    idx = findmax(4, matrix);

    printf("Index me vleren me te larte = %d \n", idx );

    idx = findidx(4, matrix, value );

    if (idx >=0){
        printf("Koha te @Value ndodhet ne indeksin = %d \n", idx );
    }
    else{
        printf("Koha te @Value nuk ndodhet ne matrice \n");
    }
}