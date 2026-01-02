#include <stdio.h>

int main() {
    int c;
    scanf("%d",&c);

    switch(c){
        case 1: printf("Red"); break;
        case 2: printf("Yellow"); break;
        case 3: printf("Green"); break;
        default: printf("Invalid");
    }
    return 0;
}