// Deklaroni një listë të tipit INT me gjatësi N.
// Gjatësi dhe përmbajtja e listës përcillen nga përdoruesi.
// Krijoni një funksion i cili merr në hyrje listën e populluar dhe
// krijon një listë të re me elementët e listës origjinale por pa përsëritje.
// Psh, nëse në listën origjinale vlera “3” ndodhet 2 apo më shumë herë
// ajo do kopjohet vetëm një herë tek lista e re.
// Funksioni kthen në output numri e elementëve te lista e re.
#include <stdio.h>
int remove_duplicates(int list[], int size, int result[]) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < count; j++) {
            if (list[i] == result[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            result[count++] = list[i];
        }
    }
    return count;
}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int list[n];
    int result[100];

    for (int i = 0; i < n; i++) {
        printf("Enter values [%d]: ", i);
        scanf("%d", &list[i]);
    }

    int c = remove_duplicates(list, n, result);
    printf("Count: %d\n", c);
}