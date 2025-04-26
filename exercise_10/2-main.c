// Deklaroni një listë karakteresh me emrin LIST dhe me gjatësi 100.
// Lista popullohet nga përdoruesi me anë të funksionit “scanf”
// me një tekst sintaksa e të cilës është “tipi#kodi#emri_i_lëndës”
// (për lehtësi tipi i lëndës është 1 karakter i vetës,
//     kodi ka saktësisht 6 karaktere ndërsa emri mund të ketë gjatësi të ndryshme). 
// Krijo funksionin SPLIT i cili ndan tekstin në tre element, tipi, kodi dhe emri
// (të gjitha këta ndryshorë janë të tipit CHAR).
// Vlerësoni vetë argumentet në hyrje dhe dalje të funksionit.
#include <stdio.h>
void split(char *list, char *tipi, char *kodi, char *emri) {
    int i = 0, j = 0;
    while (list[i] != '#' && list[i] != '\0') {
        tipi[j++] = list[i++];
    }
    tipi[j] = '\0';
    i++;

    j = 0;

    while (list[i] != '#' && list[i] != '\0') {
        kodi[j++] = list[i++];
    }
    kodi[j] = '\0';
    i++;

    j = 0;
    
    while (list[i] != '\0') {
        emri[j++] = list[i++];
    }
    emri[j] = '\0';
}
int main() {
    char list[100];
    char tipi[2], kodi[7], emri[100];
    printf("Enter string\n");
    scanf("%s", list);
    printf("%s\n", list);

    split(list, tipi, kodi, emri);

    printf("Tipi: %s\n", tipi);
    printf("Kodi: %s\n", kodi);
    printf("Emri: %s\n", emri);
}