#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    bool symmetric = true;

    // Input size of square matrix
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
