#include <stdio.h>

int main() {
    int x, y;
    int result = 1;

    // Input base (x) and exponent (y)
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    // Calculate x^y using a loop
    for (int i = 1; i <= y; i++) {
        result *= x;
    }

    // Display the result
    printf("%d^%d = %d\n", x, y, result);

    return 0;
}