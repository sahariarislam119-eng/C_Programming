#include <stdio.h>

#define SIZE 5

int main() {
    int matrix[SIZE][SIZE];
    int max;

    // Input the 5x5 matrix
    printf("Enter the elements of the 5x5 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Assume the first element is the largest
    max = matrix[0][0];

    // Traverse the matrix to find the maximum element
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    // Print the largest number
    printf("The largest number in the matrix is: %d\n", max);

    return 0;
}
