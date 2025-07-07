
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_NAME 50


struct Employee {
    int id;
    char name[MAX_NAME];
    int days_present;
};


void addEmployee(struct Employee employees[], int *count);
void findMostInactiveEmployee(struct Employee employees[], int count);
void updateEmployeeName(struct Employee employees[], int count);
void displayAllEmployees(struct Employee employees[], int count);
void clearInputBuffer();

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    printf("Welcome to UIU-STRANGER Employee Attendance Management System\n");

    while (1) {

        printf("\nMenu:\n");
        printf("1. Add New Employee\n");
        printf("2. Find Most Inactive Employee\n");
        printf("3. Update Employee Name\n");
        printf("4. Display All Employees Information\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice) {
            case 1:
                if (count < MAX_EMPLOYEES) {
                    addEmployee(employees, &count);
                } else {
                    printf("Cannot add more employees. Maximum limit reached.\n");
                }
                break;
            case 2:
                findMostInactiveEmployee(employees, count);
                break;
            case 3:
                updateEmployeeName(employees, count);
                break;
            case 4:
                displayAllEmployees(employees, count);
                break;
            case 5:
                printf("Thank you for using UIU-STRANGER System. Goodbye!\n");
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


void addEmployee(struct Employee employees[], int *count) {
    struct Employee newEmployee;

    printf("\nEnter employee ID: ");
    scanf("%d", &newEmployee.id);
    clearInputBuffer();


    for (int i = 0; i < *count; i++) {
        if (employees[i].id == newEmployee.id) {
            printf("Error: Employee ID already exists.\n");
            return;
        }
    }

    printf("Enter employee name: ");
    fgets(newEmployee.name, MAX_NAME, stdin);
    newEmployee.name[strcspn(newEmployee.name, "\n")] = 0; // Remove newline

    printf("Enter days present (0-365): ");
    scanf("%d", &newEmployee.days_present);
    clearInputBuffer();


    if (newEmployee.days_present < 0 || newEmployee.days_present > 365) {
        printf("Error: Invalid number of days. Must be between 0 and 365.\n");
        return;
    }

    employees[*count] = newEmployee;
    (*count)++;
    printf("Employee added successfully!\n");
}


void findMostInactiveEmployee(struct Employee employees[], int count) {
    if (count == 0) {
        printf("\nNo employees recorded.\n");
        return;
    }

    int minIndex = 0;
    for (int i = 1; i < count; i++) {
        if (employees[i].days_present < employees[minIndex].days_present) {
            minIndex = i;
        }
    }

    printf("\nMost Inactive Employee:\n");
    printf("ID: %d\n", employees[minIndex].id);
    printf("Name: %s\n", employees[minIndex].name);
    printf("Days Present: %d\n", employees[minIndex].days_present);
}


void updateEmployeeName(struct Employee employees[], int count) {
    if (count == 0) {
        printf("\nNo employees recorded.\n");
        return;
    }

    int id;
    printf("\nEnter employee ID to update name: ");
    scanf("%d", &id);
    clearInputBuffer();

    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Current name: %s\n", employees[i].name);
            printf("Enter new name: ");
            fgets(employees[i].name, MAX_NAME, stdin);
            employees[i].name[strcspn(employees[i].name, "\n")] = 0; // Remove newline
            printf("Name updated successfully!\n");
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}


void displayAllEmployees(struct Employee employees[], int count) {
    if (count == 0) {
        printf("\nNo employees recorded.\n");
        return;
    }

    printf("\nAll Employees Information:\n");
    printf("ID\tName\t\tDays Present\n");
    printf("------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s\t%d\n",
               employees[i].id, employees[i].name, employees[i].days_present);
    }
}
