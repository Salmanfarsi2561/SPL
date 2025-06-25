#include <stdio.h>

void isEvenOrOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    isEvenOrOdd(number);
    return 0;
}