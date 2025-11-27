#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    // Input string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Count characters until null character or newline
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}
