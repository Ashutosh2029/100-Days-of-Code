#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    // Read input string including spaces
    fgets(str, sizeof(str), stdin);

    // Print each character until newline or null character
    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
