#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    char dept[50];
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);  

        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Department: ");
        scanf(" %[^\n]", employees[i].dept);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
  	printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Department: %s\n", employees[i].dept);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}

