#include <stdio.h>

int main() {
    int n, i, pos;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete (0-based index)
    scanf("%d", &pos);

    // Shift elements left to overwrite the element at position
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print updated array
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
