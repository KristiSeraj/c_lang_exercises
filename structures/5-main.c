#include <stdio.h>

struct Book {
    char name[20], author[20];
    int ID, pages;
};

int main() {
    struct Book books[3] = {
        {"Book1", "John", 1, 350},
        {"Book2", "Mike", 2, 400},
        {"Book2", "Tommy", 3, 200},
    };
    for (int i = 0; i < 3; i++) {
        if (books[i].pages > 300) {
            printf("ID: %d, name: %s, author: %s, pages: %d\n", books[i].ID, books[i].name, books[i].author, books[i].pages);
        }
    }
    return 0;
}