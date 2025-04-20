#include <stdio.h>

int main() {
    int m, n, sum = 0;

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
            sum += matrix[i][j]; // Add each element to the sum
        }
    }

    // Display the sum of all elements
    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}