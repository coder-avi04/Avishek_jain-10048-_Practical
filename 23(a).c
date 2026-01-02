#include <stdio.h>

int main() {
    int rows = 4, cols = 7;
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}