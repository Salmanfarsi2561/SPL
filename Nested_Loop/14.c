#include <stdio.h>

int main() {
    int n,row,col;
    printf("Enter your n:");
    scanf("%d", &n);

    for(int row = 1; row <= n; row++) {
        if(row % 2 != 0) {
            // Odd row: print full stars
            for(int col = 1; col <= 5; col++) {
                printf("*");
            }
        } else {
            // Even row: print *___*
            printf("*");
            for(int col = 1; col <= 3; col++) {
                printf("_");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

