#include <stdio.h>

int main() {
    int n, row, col;

    while (1) {
        printf("Enter n (n >= 3): ");
        scanf("%d", &n);
        if (n >= 3) break;
    }

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            // Left and right
            if (col == 1 || col == n) {
                printf("*");
            }
            // Diagonal going from top-left to center
            else if (row == col && row <= n/2 + 1) {
                printf("*");
            }
            // Diagonal going from top-right to center
            else if (row + col == n + 1 && row <= n/2 + 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Testing");

    return 0;
}

