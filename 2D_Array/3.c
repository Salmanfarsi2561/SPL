#include <stdio.h>

int main() {
    int matrix[3][3];
    int determinant;

    //Taking input for the 3x3 matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the determinant of the 3x3 matrix
    //If you don't understand this formula, please ask me or text me about this
    // YOu can also watch a youtube video about diterminant of 3x3 matrix
    determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
                - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
                + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    
    printf("\nThe determinant of the matrix is: %d\n", determinant);

    return 0;
}