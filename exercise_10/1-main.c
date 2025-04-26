// Deklaroni një matricë të tipit CHAR.
// Numri i rreshtave jepet nga përdoruesi ndërsa numri i kolonave është 20.
// Vlerat e saj merren nga përdoruesi me funksionin “scanf” (thirrje rresht pas rreshti).
// Krijoni një funksion i cili merr në hyrje matricën e krijuar,
// numri e rreshtave dhe një listë të tipit INT me gjatësi N.
// Kjo listë duhet të popullohet me numrin e karaktereve
// të përcjellë nga përdoruesi për çdo rresht me anë të funksionit “scanf”.
#include <stdio.h>
#include <string.h>
void populate(char M[][20], int rows, int list[]) {
    for (int i = 0; i < rows; i++) {
        list[i] = strlen(M[i]);
    }
}
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    char M[rows][20];
    int list[rows];

    getchar();
    
    printf("Enter values: \n");
    for (int i = 0; i < rows; i++) {
        printf("Enter text for row %d: ", i + 1);
        scanf("%19[^\n]", M[i]);
        getchar();
    }

    populate(M, rows, list);
    for (int i = 0; i < rows; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}