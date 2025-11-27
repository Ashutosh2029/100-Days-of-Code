#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i;

    // Input full name
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Print first character as initial
