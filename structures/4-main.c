#include <stdio.h>

typedef struct {
    int id, etcs;
    char name[30], typology;
} course;

course nextCourse() {
    course newCourse;

    printf("Enter id of course: ");
    scanf("%d", &newCourse.id);
    printf("Enter name of course: ");
    scanf("%s", newCourse.name);
    printf("Enter etcs of course: ");
    scanf("%d", &newCourse.etcs);
    printf("Enter typology of course: ");
    scanf(" %c", &newCourse.typology);

    return newCourse;
}

void printCourse(course c1) {
    printf("Id: %d\n", c1.id);
    printf("Name: %s\n", c1.name);
    printf("ETCS: %d\n", c1.etcs);
    printf("Typology: %c\n", c1.typology);
}

int main() {
    int n;
    printf("Enter the number of course: ");
    scanf("%d", &n);
    
    course courses[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for course %d\n", i + 1);
        courses[i] = nextCourse();
    }

    printf("Course details\n");
    for (int i = 0; i < n; i++) {
        printCourse(courses[i]);
    }
}