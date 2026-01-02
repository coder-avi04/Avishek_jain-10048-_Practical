#include <stdio.h>

int main() {
    int x = 5;
    printf("Pre: %d\n", ++x);
    x = 5;
    printf("Post: %d\n", x++);
    return 0;
}
