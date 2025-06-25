
//Function that takes two numbers as input and determines if the first number is greater than, equal to or less than the second number.


#include <stdio.h>


void compareNumbers(int a, int b) {
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else if (a < b) {
        printf("%d is less than %d\n", a, b);
    } else {
        printf("%d is equal to %d\n", a, b);
    }
}

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    compareNumbers(num1, num2);
    return 0;
}


