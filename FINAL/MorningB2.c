#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_STR 100


struct Book {
    char title[MAX_STR];
    char author_name[MAX_STR];
    int publication_year;
    char availability_status[20];
};


void addBook(struct Book books[], int *count);
void searchBook(struct Book books[], int count, char title[]);
void updateStatus(struct Book books[], int count, char title[]);
void displayBooks(struct Book books[], int count);
void clearInputBuffer();

int main() {
    struct Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    char search_title[MAX_STR];

    while (1) {

        printf("\nLibrary Book Management System\n");
        printf("1. Add a New Book\n");
        printf("2. Search for a Book by Title\n");
        printf("3. Update Book Availability Status\n");
        printf("4. Display All Books\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice) {
            case 1:
                if (count < MAX_BOOKS) {
                    addBook(books, &count);
                } else {
                    printf("Cannot add more books. Maximum limit reached.\n");
                }
                break;
            case 2:
                printf("Enter book title to search: ");
                fgets(search_title, MAX_STR, stdin);
                search_title[strcspn(search_title, "\n")] = 0; // Remove newline
                searchBook(books, count, search_title);
                break;
            case 3:
                printf("Enter book title to update status: ");
                fgets(search_title, MAX_STR, stdin);
                search_title[strcspn(search_title, "\n")] = 0; // Remove newline
                updateStatus(books, count, search_title);
                break;
            case 4:
                displayBooks(books, count);
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    }
    return 0;
}


void clearInputBuffer() {
    while (getchar() != '\n');
}


void addBook(struct Book books[], int *count) {
    struct Book newBook;

    printf("\nEnter book title: ");
    fgets(newBook.title, MAX_STR, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = 0;

    printf("Enter author name: ");
    fgets(newBook.author_name, MAX_STR, stdin);
    newBook.author_name[strcspn(newBook.author_name, "\n")] = 0;

    printf("Enter publication year: ");
    scanf("%d", &newBook.publication_year);
    clearInputBuffer();

    printf("Enter availability status (Available/Checked Out): ");
    fgets(newBook.availability_status, 20, stdin);
    newBook.availability_status[strcspn(newBook.availability_status, "\n")] = 0;


    if (strcmp(newBook.availability_status, "Available") != 0 &&
        strcmp(newBook.availability_status, "Checked Out") != 0) {
        printf("Invalid status. Setting to Available by default.\n");
        strcpy(newBook.availability_status, "Available");
    }

    books[*count] = newBook;
    (*count)++;
    printf("Book added successfully!\n");
}


void searchBook(struct Book books[], int count, char title[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            found = 1;
            printf("\nBook Found:\n");
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author_name);
            printf("Publication Year: %d\n", books[i].publication_year);
            printf("Availability Status: %s\n", books[i].availability_status);
            break;
        }
    }
    if (!found) {
        printf("\nBook not available.\n");
    }
}


void updateStatus(struct Book books[], int count, char title[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            found = 1;
            printf("\nCurrent status: %s\n", books[i].availability_status);
            printf("Enter new status (Available/Checked Out): ");
            char new_status[20];
            fgets(new_status, 20, stdin);
            new_status[strcspn(new_status, "\n")] = 0;

            if (strcmp(new_status, "Available") == 0 || strcmp(new_status, "Checked Out") == 0) {
                strcpy(books[i].availability_status, new_status);
                printf("Status updated successfully!\n");
            } else {
                printf("Invalid status. Status not updated.\n");
            }
            break;
        }
    }
    if (!found) {
        printf("\nBook not found.\n");
    }
}


void displayBooks(struct Book books[], int count) {
    if (count == 0) {
        printf("\nNo books recorded.\n");
        return;
    }

    printf("\nList of Books:\n");
    printf("Title\t\tAuthor\t\tYear\tStatus\n");
    printf("--------------------------------------------------\n");


    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].availability_status, "Available") == 0) {
            printf("%-15s\t%-15s\t%d\t%s\n",
                   books[i].title, books[i].author_name,
                   books[i].publication_year, books[i].availability_status);
        }
    }


    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].availability_status, "Checked Out") == 0) {
            printf("%-15s\t%-15s\t%d\t%s\n",
                   books[i].title, books[i].author_name,
                   books[i].publication_year, books[i].availability_status);
        }
    }
}
