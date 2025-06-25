#include <stdio.h>

void checkNumber(int num) {
    if (num > 0) {
        printf("%d is Positive\n", num);
    } else if (num < 0) {
        printf("%d is Negative\n", num);
    } else {
        printf("The number is Zero\n");
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    checkNumber(number);
    return 0;
}