#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Itemp{
    int id;
    char name[30];
    float price;
    struct Itemp *next;
} Itemp;

void show(Itemp *ptr) {
    if (ptr == NULL) {
        return;
    }
    printf("Pointer items, ID: %d, name: %s, price: %.2f\n", ptr->id, ptr->name, ptr->price);
}

void show_next(Itemp *ptr) {
    if (ptr == NULL || ptr == NULL || ptr->next == NULL) {
        return;
    }
    printf("Displaying items of next pointer, ID: %d, name: %s, price: %.2f\n", ptr->next->id, ptr->next->name, ptr->next->price);
}

void show_next_next(Itemp *ptr) {
    if (ptr->next == NULL || ptr->next->next == NULL) {
        return;
    }
    printf("Next next pointer, ID: %d, name: %s, price: %.2f\n", ptr->next->next->id, ptr->next->next->name, ptr->next->next->price);
}

int main() {
    Itemp *p1, *p2, *p3;
    p1 = (Itemp*)malloc(sizeof(Itemp));
    p2 = (Itemp*)malloc(sizeof(Itemp));
    p3 = (Itemp*)malloc(sizeof(Itemp));

    if (!p1 || !p2 || !p3) {
        return 1;
    }

    printf("P1 items: \n");
    printf("Enter id: ");
    scanf("%d", &p1->id);
    printf("Enter name: ");
    scanf("%s", p1->name);
    printf("Enter price: ");
    scanf("%f", &p1->price);

    printf("P2 items: \n");
    printf("Enter id: ");
    scanf("%d", &p2->id);
    printf("Enter name: ");
    scanf("%s", p2->name);
    printf("Enter price: ");
    scanf("%f", &p2->price);

    printf("P3 items: \n");
    printf("Enter id: ");
    scanf("%d", &p3->id);
    printf("Enter name: ");
    scanf("%s", p3->name);
    printf("Enter price: ");
    scanf("%f", &p3->price);

    p1->next = p2;
    p2->next = p3;

    show(p1);
    show(p2);
    show(p3);

    show_next(p1);
    show_next(p2);
    show_next(p3);

    show_next_next(p1);
    show_next_next(p2);
    show_next_next(p3);

    free(p1);
    free(p2);
    free(p3);
}