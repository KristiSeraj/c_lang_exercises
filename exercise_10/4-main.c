// Deklaroni dy lista me nga tre elementë secila.
// Çdo listë përfaqëson kohën e shprehur në [orë][minuta][sekonda].
// Vlerat e dy listave jepen nga përdoruesi.
// Krijoni një funksion i cili merr në hyrje dy listat dhe kthen (në output)
// një listë të tretë e cila përfaqëson shumën e kohëve.
// Lista e tretë krijohet brenda funksionit.
// Kujdes me llogaritjes e kohës! Nëse shuma e sekondave e kalon vlerën 60,
// duhet të shtoni një njësi tek minutat. I njëjti arsyetim mbi minutat dhe orën.
#include <stdio.h>
#include <stdlib.h>
int *sum_clock(int t1[], int t2[]) {
    int *new_time = malloc(3 * sizeof(int));
    int carry = 0;

    if (new_time == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    int sum = t1[2] + t2[2];
    if (sum >= 60) {
        carry = 1;
        sum -= 60;
    } else {
        carry = 0;
    }
    new_time[2] = sum;

    sum = t1[1] + t2[1] + carry;
    if (sum >= 60) {
        carry = 1;
        sum = sum - 60;
    } else {
        carry = 0;
    }
    new_time[1] = sum;

    new_time[0] = t1[0] + t2[0] + carry;

    return new_time;
}
int main() {
    int l1[3], l2[3];
    
    printf("Enter time in HH:MM:SS\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &l1[i]);
    }

    printf("Enter time in HH:MM:SS\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &l2[i]);
    }

    int *newtime = sum_clock(l1, l2);

    if (newtime != NULL) {
        printf("Sum of times = %02d:%02d:%02d\n", newtime[0], newtime[1], newtime[2]);
        free(newtime);
    }

    return 0;
}