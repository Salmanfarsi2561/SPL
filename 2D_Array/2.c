#include <stdio.h>

int main() {
    int m, n;

    // Input dimensions of the array
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int array[m][n];

    // Input elements of the array
    printf("Enter the elements of the %d x %d array:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Print the array row-wise
    printf("\nArray printed row-wise:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        
    }

    // Print the array column-wise
    // Here I am swapping m and n to print column-wise
    // and printing array[j][i] to access the elements in column-major order
    printf("\nArray printed column-wise:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", array[j][i]);
        }
        
    }

    return 0;
}