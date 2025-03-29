#include <stdio.h>
#include <string.h>

typedef struct {
    char brand[20], fuelType[20];
    int nuDoors, nuOfPassengers;
} Vehicle;

void printVehicle(Vehicle vec1) {
    printf("Brand name: %s\n", vec1.brand);
    printf("Fuel type: %s\n", vec1.fuelType);
    printf("Number of doors: %d\n", vec1.nuDoors);
    printf("Number of passengers: %d\n", vec1.nuOfPassengers);
    printf("\n");
}

void printGasoline(Vehicle vehicles[], int size) {
    for (int i = 0; i < size; i++) {
        if (strcmp(vehicles[i].fuelType, "Gasoline") == 0 || strcmp(vehicles[i].fuelType, "gasoline") == 0) {
            printf("--This vehicle uses gasoline.--\n");
            printVehicle(vehicles[i]);
        }
    }
}

Vehicle nextVehicle() {
    Vehicle vec1;

    printf("Enter brand of vehicle: ");
    scanf("%s", vec1.brand);
    printf("Enter fuel tye of vehicle: ");
    scanf("%s", vec1.fuelType);
    printf("Enter number of doors of vehicle: ");
    scanf("%d", &vec1.nuDoors);
    printf("Enter number of passengers of vehicle: ");
    scanf(" %d", &vec1.nuOfPassengers);

    return vec1;
}

int main() {
    int size;
    printf("Enter the number of vehicles: ");
    scanf("%d", &size);
    Vehicle vecs[size];

    for (int i = 0; i < size; i++) {
        printf("Enter details for each vehicle.\n");
        vecs[i] = nextVehicle();
    }
    
    printf("Vehicle details\n");
    for (int i = 0; i < size; i++) {
        printVehicle(vecs[i]);
    }
    printGasoline(vecs, size);

    return 0;
}