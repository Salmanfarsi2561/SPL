#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book {
    char title[100];
    char author[100];
    int year;
    char status[20];
};

void addBook(struct Book books[], int *count) {
    printf("Title: ");
    scanf(" %[^\n]", books[*count].title);

    printf("Author: ");
    scanf(" %[^\n]", books[*count].author);

    printf("Year: ");
    scanf("%d", &books[*count].year);

    printf("Status (Available/Checked Out): ");
    scanf(" %[^\n]", books[*count].status);

    (*count)++;
}

void searchBook(struct Book books[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Title: %s\nAuthor: %s\nYear: %d\nStatus: %s\n",
                   books[i].title, books[i].author, books[i].year, books[i].status);
            return;
        }
    }
    printf("Book not available\n");
}

void updateStatus(struct Book books[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("New status: ");
            scanf(" %[^\n]", books[i].status);
            printf("Status updated\n");
            return;
        }
    }
    printf("Book not found\n");
}

void displayBooks(struct Book books[], int count) {
    printf("\nAvailable Books:\n");
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].status, "Available") == 0) {
            printf("Title: %s, Author: %s, Year: %d, Status: %s\n",
                   books[i].title, books[i].author, books[i].year, books[i].status);
        }
    }

    printf("\nChecked Out Books:\n");
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].status, "Available") != 0) {
            printf("Title: %s, Author: %s, Year: %d, Status: %s\n",
                   books[i].title, books[i].author, books[i].year, books[i].status);
        }
    }
}

int main() {
    struct Book books[MAX];
    int count = 0, choice;
    char title[100];

    while (1) {
        printf("\n1.Add 2.Search 3.Update 4.Display 5.Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1)
            addBook(books, &count);
        else if (choice == 2) {
            printf("Enter title: ");
            scanf(" %[^\n]", title);
            searchBook(books, count, title);
        }
        else if (choice == 3) {
            printf("Enter title: ");
            scanf(" %[^\n]", title);
            updateStatus(books, count, title);
        }
        else if (choice == 4)
            displayBooks(books, count);
        else if (choice == 5)
            break;
        else
            printf("Invalid\n");
    }

    return 0;
}
