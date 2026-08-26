#include <stdio.h>

#define SIZE 4

int main() {
    int matrix[SIZE][SIZE], transpose[SIZE][SIZE];

    // Input the 4x4 matrix
    printf("Enter the elements of the 4x4 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute the transpose of the matrix
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transpose[j][i] = matrix[i][j];  // Swap rows with columns
        }
    }

    // Print the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the transposed matrix
    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
