#include <stdio.h>

int main() {
    int n;
    printf("Please Enter Input: ");
    scanf("%d", &n);

    int dollar = n / 2 - 1;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row == 0) {
                
                printf("$");
            } 
            else if (row < n / 2) {
                
                if (col == n - 1)
                    printf("$");
                else
                    printf("#");
            } 
            else {
                
                if (col < dollar || col == n - 1)
                    printf("$");
                else
                    printf("#");
            }

            if (col != n - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
