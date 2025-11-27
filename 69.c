#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int largest = INT_MIN, secondLargest = INT_MIN;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Update largest and second largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("%d\n", secondLargest);

    return 0;
}
