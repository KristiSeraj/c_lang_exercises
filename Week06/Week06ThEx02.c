#include <stdio.h>
#include <stdlib.h>


int * clone(int n, int list_orig[n]){

    static int list_new[10];
    for(int i = 0; i < n; i++){
        list_new[i] = list_orig[i];
    }
    return list_new;
}


int clean_from_negative(int n, int list_orig[n]){
    int sizenew = 0;
    for(int i = 0; i < n; i++){
        if(list_orig[i] > 0){
            list_orig[sizenew] = list_orig[i];
            sizenew++;
        }
    }
    return sizenew;
}

void filterpositive(int n, int list_orig[], int list_new[n], int * size_new){

    *size_new = 0;
    for(int i = 0; i < n; i++){
        if(list_orig[i] > 0){
            list_new[(*size_new)] = list_orig[i];
            (*size_new)++;
        }
    }
}


int main(){

    int n = 10;
    int list_orig[10] = {1,2,-3,4,5,-6,7,8,-9,10};

    int * list_new;

    list_new = clone(10, list_orig);
    for(int i = 0; i < n; i++){
        printf("list_new[%d]=%d \n", i, list_new[i]);
    }

    int newsize = clean_from_negative(10, list_new);
    for(int i = 0; i < newsize; i++){
       printf("list_cleaned[%d]=%d \n", i, list_new[i]);
    }
    
    int list_filtered[n];
    filterpositive(n, list_orig, list_filtered, &newsize);
    for(int i = 0; i < newsize; i++){
       printf("list_filtered[%d]=%d \n", i, list_filtered[i]);
    }
    
}