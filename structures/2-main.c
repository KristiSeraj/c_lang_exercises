#include <stdio.h>
#include <string.h>

struct City {
    int population;
    char name[30];
    char type;
};

int main() {
    struct City city_2;
    city_2.population = 20000;
    strcpy(city_2.name, "Tirana");
    city_2.type = 'A';
    printf("Population: %d, type: %c, name: %s\n", city_2.population, city_2.type, city_2.name);
    return 0;
}