#include <stdio.h>

int main() {
    int n, i, key;

    // Size of array
    scanf("%d", &n);

    int arr[n + 1];   // +1 for new element

    // Input sorted array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to insert
    scanf("%d", &key);

    int pos = n - 1;

    // Shift elements to create space
    while (pos >= 0 && arr[pos] > key) {
        arr[pos + 1] = arr[pos];
        pos--;
    }

    // Insert the new element
    arr[pos + 1] = key;

    // Print updated array
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
