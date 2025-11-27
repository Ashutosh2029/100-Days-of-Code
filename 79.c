#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Input matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal
    for (int d = 0; d < rows + cols - 1; d++) {
        int r = d < rows ? d : rows - 1;
        int c = d < rows ? 0 : d - rows + 1;

        while (r >= 0 && c < cols) {
            printf("%d ", matrix[r][c]);
            r--;
            c++;
        }
    }

    return 0;
}
