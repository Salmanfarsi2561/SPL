#include <stdio.h>

int main() {
    int m, n;

    // Input the dimensions of the matrix
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];

    // Input elements of the matrix
    printf("Enter the elements of the %d x %d matrix:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Replace duplicates with -1
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                for (int l = 0; l < n; l++) {
                    if ((i != k || j != l) && matrix[i][j] == matrix[k][l]) {
                        matrix[k][l] = -1;
                    }
                }
            }
        }
    }

    // Display the modified matrix
    printf("\nThe modified matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}