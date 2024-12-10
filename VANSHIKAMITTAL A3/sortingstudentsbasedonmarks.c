//create a struct student with name,age and marks,write a function pointer that sort the array of students as per
//their marks
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks > students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

void printStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Marks: %.2f\n", students[i].name, students[i].age, students[i].marks);
    }
}

int main() {
   
    struct Student students[] = {
        {"Alice", 20, 89.5},
        {"Bob", 22, 75.2},
        {"Charlie", 21, 91.3},
        {"David", 23, 85.0}
    };

    int n = sizeof(students) / sizeof(students[0]);

    printf("Before Sorting:\n");
    printStudents(students, n);

    sortStudents(students, n, compareMarks);

    printf("\nAfter Sorting by Marks:\n");
    printStudents(students, n);

    return 0;
}

