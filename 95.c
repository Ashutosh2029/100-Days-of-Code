#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    
    // Input two strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check if lengt
