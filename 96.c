#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int start, end, i;

    // Input sentence including spaces
    fgets(str, sizeof(str), stdin);
