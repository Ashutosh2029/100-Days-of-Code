#include <stdio.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, special = 0, i = 0;
    char ch;

    // Input string (including spaces)
    fgets(str, sizeof(str), stdin);

    while ((ch = str[i]) != '\0' && ch != '\n') {
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if ((ch >
