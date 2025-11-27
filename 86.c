#include <stdio.h>

int main() {
    char str[1000];
    int i, length = 0, flag = 1;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Find length (excluding newline)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
