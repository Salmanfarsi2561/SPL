#include <stdio.h>

int main() {
    int m, n;

    // Input the dimensions of the matrix
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];
    int maxElement, maxRow = 0, maxCol = 0;

    // Input elements of the matrix
    printf("Enter the elements of the %d x %d matrix:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize maxElement with the first element of the matrix
    maxElement = matrix[0][0];

    // Find the maximum element and its index
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Display the maximum element and its index
    printf("\nThe maximum element is %d at index [%d][%d].\n", maxElement, maxRow, maxCol);

    return 0;
}