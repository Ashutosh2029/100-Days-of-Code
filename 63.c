#include <stdio.h>

int main() {
    int n1, n2, i;

    // Size of first array
    scanf("%d", &n1);
    int arr1[n1];

    // Elements of first array
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Size of second array
    scanf("%d", &n2);
    int arr2[n2];

    // Elements of second array
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Combined array
    int merged[n1 + n2];

    // Copy first array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array
    for (i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
