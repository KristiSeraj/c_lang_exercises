#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
    int id;
    char name[30];
    float price;
} Item;

int main() {
    Item i1;
    
    printf("Enter id: ");
    scanf("%d", &i1.id);
    printf("Enter name: ");
    scanf("%s", i1.name);
    printf("Enter price: ");
    scanf("%f", &i1.price);

    Item i2;
    i2 = i1;

    printf("I1 items: \n");
    printf("%d %s %.2f\n", i1.id, i1.name, i1.price);
    printf("I2 items: \n");
    printf("%d %s %.2f\n", i2.id, i2.name, i2.price);

    i2.id = 10;
    strcpy(i2.name, "Book");
    i2.price = 33.3;

    printf("I2 items after modification: \n");
    printf("%d %s %.2f\n", i2.id, i2.name, i2.price);

    Item *p1;
    p1 = (Item*)malloc(sizeof(Item));

    printf("Enter id: ");
    scanf("%d", &p1->id);
    printf("Enter name: ");
    scanf("%s", p1->name);
    printf("Enter price: ");
    scanf("%f", &p1->price);

    printf("P1 items: \n");
    printf("%d %s %.2f\n", p1->id, p1->name, p1->price);

    Item *p2;
    p2 = p1;
    
    printf("P2 items: \n");
    printf("%d %s %.2f\n", p2->id, p2->name, p2->price);

    p2->id = 10;
    strcpy(p2->name, "Book");
    p2->price = 33.3;

    printf("P1 items after modification: \n");
    printf("%d %s %.2f\n", p1->id, p1->name, p1->price);
    printf("P2 items after modification: \n");
    printf("%d %s %.2f\n", p2->id, p2->name, p2->price);

    free(p1);
}