#include <stdio.h>

int main() {
    int n, i, k;

    // Input size of array
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of positions to rotate
    scanf("%d", &k);

    k = k % n;  // Handle rotations greater than array size

    // Rotate right using reversal method

    // Function to reverse part of array
    void reverse(int a[], int start, int end) {
        int temp;
        while (start < end) {
