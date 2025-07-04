// This program demonstrates the use of pointers to add two integers input by the user.
#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Assign pointers to the addresses of num1 and num2
    ptr1 = &num1;
    ptr2 = &num2;

    // Add the values using dereferencing
    sum = *ptr1 + *ptr2;

    printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

    return 0;
}
