#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0, i = 0;
    char ch;

    // Input string (including spaces)
    fgets(str, sizeof(str), stdin);

    while ((ch = str[i]) != '\0' && ch != '\n') {
        ch = tolower(ch); // Convert to lowercase

        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o
