#include <stdio.h>

int main() {
    int n, i, pos, key;

    // Input size of array
    scanf("%d", &n);

    int arr[n + 1];  // +1 for new element

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and element to insert
    scanf("%d %d", &pos, &key);

    // Shift elements to the right from position
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at position
    arr[pos] = key;

    // Print updated array
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
