#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0;

    // Input two strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    if (str1[strlen(str1)-1] == '\n') str1[strlen(str1)-1] = '\0';
    if (str2[strlen(str2)-1] == '\n') str2[strlen(str2)-1] = '\0';

    // Count frequency of characters for first string
    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            freq1[str1[i] - 'a']++;
        }
        i++;
    }

    i = 0;
    // Count frequency for second string
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            freq2[str2[i] - 'a']++;
        }
        i++;
    }

    // Compare frequency arrays
    int flag = 1;
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
