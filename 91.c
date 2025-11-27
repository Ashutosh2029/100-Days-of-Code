#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Remove vowels in-place
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; // Null-terminate the new string

    // Print result
    printf("%s\n", str);

    return 0;
}
