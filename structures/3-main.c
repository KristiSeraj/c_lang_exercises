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
    printf("Id of course %d, name of the course %s, etcs of course %d, typology of course %c\n", c1.id, c1.name, c1.etcs, c1.typology);
}

int main() {
    course myCourse = nextCourse();
    printCourse(myCourse);
}