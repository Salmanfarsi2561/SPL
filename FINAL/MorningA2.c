
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NUM_SUBJECTS 5

// Structure to store student information
struct Student {
    char name[50];
    int id;
    int marks[NUM_SUBJECTS];
    float average;
};

// Function prototypes
void addStudent(struct Student students[], int *count);
void displayAllStudents(struct Student students[], int count);
void findTopPerformer(struct Student students[], int count);
void findFailingStudents(struct Student students[], int count);
void clearInputBuffer();

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0; // Current number of students
    int choice;

    while (1) {
        // Display menu
        printf("\nStudent Performance Management System\n");
        printf("1. Add a New Student\n");
        printf("2. Display All Students\n");
        printf("3. Find Top Performer\n");
        printf("4. Find Failing Students\n");
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
                displayAllStudents(students, count);
                break;
            case 3:
                findTopPerformer(students, count);
                break;
            case 4:
                findFailingStudents(students, count);
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


void addStudent(struct Student students[], int *count) {
    struct Student newStudent;
    float sum = 0;

    printf("\nEnter student name: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = 0; // Remove newline

    printf("Enter student ID: ");
    scanf("%d", &newStudent.id);
    clearInputBuffer();

    printf("Enter marks for %d subjects:\n", NUM_SUBJECTS);
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        do {
            printf("Subject %d: ", i + 1);
            scanf("%d", &newStudent.marks[i]);
            if (newStudent.marks[i] < 0 || newStudent.marks[i] > 100) {
                printf("Invalid marks. Please enter between 0 and 100.\n");
            }
        } while (newStudent.marks[i] < 0 || newStudent.marks[i] > 100);
        sum += newStudent.marks[i];
    }
    clearInputBuffer();

    newStudent.average = sum / NUM_SUBJECTS;
    students[*count] = newStudent;
    (*count)++;
    printf("Student added successfully!\n");
}


void displayAllStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo students recorded.\n");
        return;
    }

    printf("\nList of Students:\n");
    printf("ID\tName\t\tMarks\t\tAverage\n");
    printf("--------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s\t", students[i].id, students[i].name);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%d ", students[i].marks[j]);
        }
        printf("\t%.2f\n", students[i].average);
    }
}


void findTopPerformer(struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo students recorded.\n");
        return;
    }

    int topIndex = 0;
    for (int i = 1; i < count; i++) {
        if (students[i].average > students[topIndex].average) {
            topIndex = i;
        }
    }

    printf("\nTop Performer:\n");
    printf("ID: %d\n", students[topIndex].id);
    printf("Name: %s\n", students[topIndex].name);
    printf("Marks: ");
    for (int j = 0; j < NUM_SUBJECTS; j++) {
        printf("%d ", students[topIndex].marks[j]);
    }
    printf("\nAverage: %.2f\n", students[topIndex].average);
}


void findFailingStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo students recorded.\n");
        return;
    }

    int found = 0;
    printf("\nFailing Students (marks < 40 in at least one subject):\n");
    for (int i = 0; i < count; i++) {
        int failCount = 0;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            if (students[i].marks[j] < 40) {
                failCount++;
            }
        }
        if (failCount > 0) {
            found = 1;
            printf("\nID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Failed in %d subject(s): ", failCount);
            for (int j = 0; j < NUM_SUBJECTS; j++) {
                if (students[i].marks[j] < 40) {
                    printf("Subject %d (%d) ", j + 1, students[i].marks[j]);
                }
            }
            printf("\n");
        }
    }

    if (!found) {
        printf("No students failed in any subject.\n");
    }
}

