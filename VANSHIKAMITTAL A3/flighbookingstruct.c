//make a flight booking system
#include <stdio.h>
#include <string.h>

struct Passenger {
    char name[50];
    int age;
    int seatNumber;
    char flightClass[20]; 
};


void addPassenger(struct Passenger *p, const char *name, int age, int seatNumber, const char *flightClass) {
    strcpy(p->name, name);
    p->age = age;
    p->seatNumber = seatNumber;
    strcpy(p->flightClass, flightClass);
}

void printPassenger(struct Passenger p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Seat Number: %d\n", p.seatNumber);
    printf("Class: %s\n", p.flightClass);
}
void displayPassengers(struct Passenger passengers[], int n) {
    printf("\n--- List of Passengers ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nPassenger %d:\n", i + 1);
        printPassenger(passengers[i]);
    }
}

int main() {
    int n, age, seatNumber;
    char name[50], flightClass[20];

    printf("Enter the number of passengers: ");
    scanf("%d", &n);

    struct Passenger passengers[n];


    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Passenger %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s",name);

        printf("Enter age: ");
        scanf("%d", &age);

        printf("Enter seat number: ");
        scanf("%d", &seatNumber);

        printf("Enter class (Economy or Business): ");
        scanf("%s",class);

        addPassenger(&passengers[i], name, age, seatNumber, flightClass);
    }

  
    displayPassengers(passengers, n);

    return 0;
}

