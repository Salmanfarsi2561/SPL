#include <stdio.h>

int main() {
    int n,row,col,mid;
    printf("Enter your number n:");
    scanf("%d", &n);

    for(row = 1; row <= n; row++) {
        // Left side: 1 to row
        for(int col = 1; col <= row; col++) {
            printf("%d", col);
        }

        // Middle spaces: 2*(n - row)
        for(mid = 1; mid <= 2 * (n - row); mid++) {
            printf("_");
        }

        // Right side: row to 1
        for(col = row; col >= 1; col--) {
            printf("%d", col);
        }

        printf("\n");
    }

    return 0;
}
