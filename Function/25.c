#include <stdio.h>

#define ROWS 3
#define COLS 5

// Function to input matrix elements
void InputMatrix(int mat[ROWS][COLS]) {
    printf("Enter elements for a 3x5 matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to display the matrix
void ShowMatrix(int mat[ROWS][COLS]) {
    printf("Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply matrix by a scalar
void ScalarMultiply(int mat[ROWS][COLS], int scalar) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            mat[i][j] *= scalar;
        }
    }
}

int main() {
    int matrix[ROWS][COLS];
    int scalar;

    InputMatrix(matrix);
    ShowMatrix(matrix);

    printf("Enter a scalar to multiply: ");
    scanf("%d", &scalar);

    ScalarMultiply(matrix, scalar);

    printf("Matrix after scalar multiplication:\n");
    ShowMatrix(matrix);

    return 0;
}