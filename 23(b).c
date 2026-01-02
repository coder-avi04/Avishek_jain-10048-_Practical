#include <stdio.h>

int main() {
    int size = 4;
    int i, j;

    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}