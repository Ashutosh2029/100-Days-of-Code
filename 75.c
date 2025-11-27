#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j;

    // Input dimensions of first matrix
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];

    // Input first matrix
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input dimensions of second matrix
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];

    // Input second matrix
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if addition is possible
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added\n");
        return 0;
    }

    // Add matrices and print result
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
