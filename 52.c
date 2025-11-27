#include <stdio.h>

int main() {
    int pattern[] = {1, 3, 5, 3, 1};  // number of stars in each block
    int blocks = 5;

    for (int i = 0; i < blocks; i++) {
        for (int j = 0; j < pattern[i]; j++) {
            printf("*\n");
        }
        if (i != blocks - 1) {
            printf("\n"); // print blank line between blocks
        }
    }

    return 0;
}
