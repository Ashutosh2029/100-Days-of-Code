#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    // Read matrix elements
    for (i = 0; i < rows; i++) {
        int sum = 0;
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // Add element to row sum
        }
        rowSum[i] = sum;  // Store sum in array
    }

    // Print row sums
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
