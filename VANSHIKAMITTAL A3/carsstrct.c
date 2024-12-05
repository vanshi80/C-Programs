#include <stdio.h>


struct Car {
    char brand[50];
    char model[50];
    int year;
    float price;
};

int main() {
    int n, yearThreshold;
    

    printf("Enter the number of cars: ");
    scanf("%d", &n);

    struct Car cars[n];

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for car %d:\n", i + 1);
        printf("Brand: ");
        scanf(" %49[^\n]", cars[i].brand);  
        printf("Model: ");
        scanf(" %49[^\n]", cars[i].model);  
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Price: ");
        scanf("%f", &cars[i].price);
    }


    printf("\nEnter the year threshold: ");
    scanf("%d", &yearThreshold);

    printf("\nCars older than %d:\n", yearThreshold);
    for (int i = 0; i < n; i++) {
        if (cars[i].year < yearThreshold) {
            printf("Brand: %s, Model: %s, Year: %d, Price: %.2f\n", 
                   cars[i].brand, cars[i].model, cars[i].year, cars[i].price);
        }
    }

    return 0;
}

