#include <stdio.h>

int main() {
    int n, isSymmetric = 1;

    // Input the dimension of the square matrix
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

    // Check if the matrix is symmetric
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Matrix is not symmetric
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Display the result
    if (isSymmetric) {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is not symmetric.\n");
    }

    return 0;
}