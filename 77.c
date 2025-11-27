#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols, i, j;
    bool distinct = true;

    // Input rows and columns
    scanf("%d %d", &rows, &cols);

    if (rows != cols) { // Diagonal only exists for square matrices
        printf("False\n");
        return 0;
    }

    int matrix[rows][cols];

    // Input matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for distinct diagonal elements
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) { // Compare current diagonal with remaining
            if (matrix[i][i] == matrix[j][j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
