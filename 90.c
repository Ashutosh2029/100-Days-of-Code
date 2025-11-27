#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Toggle case for each character
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
        }
        i++;
    }

    // Print toggled string
    printf("%s", str);

    return 0;
}
90.c
