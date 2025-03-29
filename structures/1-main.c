#include <stdio.h>

struct City {
    int population;
    char type;
};

int main() {
    struct City city_1;
    city_1.population = 20000;
    city_1.type = 'A';
    printf("Population of city is %d and the type is %c\n", city_1.population, city_1.type);
    return 0;
}