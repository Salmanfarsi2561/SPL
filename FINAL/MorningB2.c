#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char title[100];
    char author[100];
    int year;
    char status[20];
} Book;

void addBook(Book books[], int *count) {
    printf("Title: "); scanf(" %[^\n]", books[*count].title);
    printf("Author: "); scanf(" %[^\n]", books[*count].author);
    printf("Year: "); scanf("%d", &books[*count].year);
    printf("Status (Available/Checked Out): "); scanf(" %[^\n]", books[*count].status);
    (*count)++;
}

void searchBook(Book books[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Title: %s\nAuthor: %s\nYear: %d\nStatus: %s\n",
                   books[i].title, books[i].author, books[i].year, books[i].status);
            return;
        }
    }
    printf("Book not available\n");
}

void updateStatus(Book books[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("New status: "); scanf(" %[^\n]", books[i].status);
            printf("Status updated\n");
            return;
        }
    }
    printf("Book not found\n");
}

void displayBooks(Book books[], int count) {
    for (int pass = 0; pass < 2; pass++) {
        for (int i = 0; i < count; i++) {
            int isAvailable = strcmp(books[i].status, "Available") == 0;
            if ((pass == 0 && isAvailable) || (pass == 1 && !isAvailable)) {
                printf("Title: %s, Author: %s, Year: %d, Status: %s\n",
                       books[i].title, books[i].author, books[i].year, books[i].status);
            }
        }
    }
}

int main() {
    Book books[MAX];
    int count = 0, choice;
    char title[100];

    while (1) {
        printf("\n1.Add 2.Search 3.Update 4.Display 5.Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1)
            addBook(books, &count);
        else if (choice == 2) {
            printf("Enter title: "); scanf(" %[^\n]", title);
            searchBook(books, count, title);
        }
        else if (choice == 3) {
            printf("Enter title: "); scanf(" %[^\n]", title);
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




