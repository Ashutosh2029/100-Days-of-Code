#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    // Input size of square matrix
    scanf("%d %d", &n, &n);

    int matrix[n][n];

    // Input matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum main diagonal elements
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
