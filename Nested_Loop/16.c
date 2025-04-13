#include <stdio.h>

int main() {
    int n;
    printf("Enter an Odd input:");
    scanf("%d", &n);

    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= n; col++) {
            if(col == row || col+row == n + 1) {
                printf("*");
            } else {
                printf("_");
            }
        }
        printf("\n");
    }

    return 0;
}

