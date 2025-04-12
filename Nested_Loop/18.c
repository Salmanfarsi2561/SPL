#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        //printing h in the first and last columns for all rows
        //printing h in the middle line n/2 + 1
        for (int j = 1; j <= n; j++) {
            if (j == 1 || j == n || i == n / 2 + 1) {
                printf("H");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
