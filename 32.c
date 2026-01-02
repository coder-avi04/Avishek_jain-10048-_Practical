#include <stdio.h>

void calc(int *a,int *b){
    printf("Add=%d\n",*a+*b);
    printf("Sub=%d\n",*a-*b);
    printf("Mul=%d\n",(*a)*(*b));
    printf("Div=%d\n",*a/(*b));
}

int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    calc(&x,&y);
    return 0;
}
