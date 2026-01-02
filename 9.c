#include <stdio.h>

int main() {
    float bal;
    scanf("%f", &bal);

    bal += 500;
    bal -= 100;
    bal *= 1.1;
    bal /= 2;

    printf("Final Balance = %.2f", bal);
    return 0;
}