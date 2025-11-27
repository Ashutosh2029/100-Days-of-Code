#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, j, k;
    int len;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Remove newline characte
