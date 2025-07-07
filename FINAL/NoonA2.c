#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME 50


struct Student {
    int id;
    char name[MAX_NAME];
    float cgpa;
};


void addStudent(struct Student students[], int *count);
void findTopStudent(struct Student students[], int count);
void findAverageCGPA(struct Student students[], int count);
void displayAllStudents(struct Student students[], int count);
void clearInputBuffer();

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    printf("Welcome to UIU-ULTRON Student Information Management System\n");

    while (1) {

        printf("\nMenu:\n");
        printf("1. Add New Student\n");
        printf("2. Find Top Student (Highest CGPA)\n");
        printf("3. Find Average CGPA of Students\n");
        printf("4. Display All Students Information\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice) {
            case 1:
                if (count < MAX_STUDENTS) {
                    addStudent(students, &count);
                } else {
                    printf("Cannot add more students. Maximum limit reached.\n");
                }
                break;
            case 2:
                findTopStudent(students, count);
                break;
            case 3:
                findAverageCGPA(students, count);
                break;
            case 4:
                displayAllStudents(students, count);
                break;
            case 5:
                printf("Thank you for using UIU-ULTRON System. Goodbye!\n");
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


void addStudent(struct Student students[], int *count) {
    struct Student newStudent;

    printf("\nEnter student ID: ");
    scanf("%d", &newStudent.id);
    clearInputBuffer();


    for (int i = 0; i < *count; i++) {
        if (students[i].id == newStudent.id) {
            printf("Error: Student ID already exists.\n");
            return;
        }
    }

    printf("Enter student name: ");
    fgets(newStudent.name, MAX_NAME, stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = 0; // Remove newline

    printf("Enter CGPA (0.0 to 4.0): ");
    scanf("%f", &newStudent.cgpa);
    clearInputBuffer();


    if (newStudent.cgpa < 0.0 || newStudent.cgpa > 4.0) {
        printf("Error: Invalid CGPA. Must be between 0.0 and 4.0.\n");
        return;
    }

    students[*count] = newStudent;
    (*count)++;
    printf("Student added successfully!\n");
}


void findTopStudent(struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo students recorded.\n");
        return;
    }

    int topIndex = 0;
    for (int i = 1; i < count; i++) {
        if (students[i].cgpa > students[topIndex].cgpa) {
            topIndex = i;
        }
    }

    printf("\nTop Student:\n");
    printf("ID: %d\n", students[topIndex].id);
    printf("Name: %s\n", students[topIndex].name);
    printf("CGPA: %.2f\n", students[topIndex].cgpa);
}


void findAverageCGPA(struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo students recorded.\n");
        return;
    }

    float sum = 0;
    for (int i = 0; i < count; i++) {
        sum += students[i].cgpa;
    }
    float average = sum / count;

    printf("\nTotal number of students: %d\n", count);
    printf("Average CGPA: %.2f\n", average);
}


void displayAllStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo students recorded.\n");
        return;
    }

    printf("\nAll Students Information:\n");
    printf("ID\tName\t\tCGPA\n");
    printf("------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s\t%.2f\n",
               students[i].id, students[i].name, students[i].cgpa);
    }
}
