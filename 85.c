#include <stdio.h>

int main() {
    char str[1000];
    int i, length = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Find length of string (excluding newline)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Print string in reverse
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
