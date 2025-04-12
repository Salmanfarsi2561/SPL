#include <stdio.h>

int main() {
    int n,col,row;
    printf("Enter your N:");
    scanf("%d", &n);

    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= n; col++) {
            // Top row and bottom row
            if(row == 1 || row == n) {
                printf("Z");
            }
            //Diagonal
            else if(col == n - row + 1) {
                printf("Z");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

