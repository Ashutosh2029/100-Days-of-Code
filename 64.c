#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};   // frequency array for digits 0–9
    int digit, maxDigit = 0, i;

    // Input number
    scanf("%lld", &n);

    // Count digit frequencies
    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    // Find digit with maximum frequency
    for (i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
