#include <stdio.h>

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    if (x < 0 || y < 0) {
        printf("Please enter positive numbers only.\n");
        return 1;
    }

    printf("%d to the power %d is %d\n", x, y, power(x, y));
    return 0;
}