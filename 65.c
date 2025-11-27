#include <stdio.h>

int main() {
    int n, i, key;
    
    // Input size
    scanf("%d", &n);

    int arr[n];

    // Input sorted array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input search key
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, index = -1;

    // Binary search
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            index = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");

    return 0;
}
