#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longest[1000];
    int i = 0, len = 0, maxLen = 0, start = 0, end = 0;

    // Input sentence including spaces
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ' && str[i] != '\t') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                start = i - len;
                end = i;
