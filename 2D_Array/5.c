#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the size of the identity matrix (n): ");
    scanf("%d", &n);

    int identity[n][n];

    // Identity matrix
    // Diagonal elements are 1
    // Non-diagonal elements are 0
    // This is a universal approach to create an identity matrix
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                identity[i][j] = 1; 
            } else {
                identity[i][j] = 0; 
            }
        }
    }

    // Printing the identity matrix
    printf("\nThe %d x %d Identity Matrix is:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", identity[i][j]);
        }
        printf("\n");
    }

    return 0;
}