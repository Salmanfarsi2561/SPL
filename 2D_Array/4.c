#include <stdio.h>

int main() {
    int n;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input elements of the matrix
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the primary diagonal (Convinient way)
    // printf("\nPrimary Diagonal: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", matrix[i][i]);
    // }

    // Print the primary diagonal (Universal approach)
    printf("\nPrimary Diagonal: ");
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    // // Print the secondary diagonal
    // printf("\nSecondary Diagonal: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", matrix[i][n - i - 1]);
    // }

    // Print the secondary diagonal (Universal approach)
    printf("\nSecondary Diagonal: ");
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}