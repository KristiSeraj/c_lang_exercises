#include <stdio.h>

typedef struct {
    char name[50];
    int id, hoursWorked, hourlyWage;
} Employee;

int salary(Employee e) {
    return e.hourlyWage * e.hoursWorked;
}

void printEmployee(Employee e) {
    printf("Id: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Hours worked: %d\n", e.hoursWorked);
}

int main() {
    Employee e1 = {"Mondi", 1, 40, 10};
    printEmployee(e1);
    int s = salary(e1);
    printf("Salary of employee is %d\n", s);

    return 0;
}