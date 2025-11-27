#include <stdio.h>

int main() {
    char str[1000], ch;
    int i = 0, count = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Input character to count
    scanf("%c", &ch);

    // Count occurrences
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}
