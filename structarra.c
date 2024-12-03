#include <stdio.h>

struct Student {
    int id;          
    char name[50];   
    float marks;     
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);  
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

