#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Equal=%d\n", a==b);
    printf("A>B=%d\n", a>b);
    printf("B>A=%d\n", b>a);
    return 0;
}
