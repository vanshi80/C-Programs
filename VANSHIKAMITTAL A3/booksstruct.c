#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    int stock;
};

int main() {
    struct Book books[3];  

    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for book %d:\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]", books[i].title);  

        printf("Author: ");
        scanf(" %[^\n]", books[i].author); 

        printf("Stock: ");
        scanf("%d", &books[i].stock);
    }

    printf("\nBooks with stock greater than 10:\n");
    for (int i = 0; i < 3; i++) {
        if (books[i].stock > 10) {
            printf("\nTitle: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Stock: %d\n", books[i].stock);
        }
    }

    return 0;
}

