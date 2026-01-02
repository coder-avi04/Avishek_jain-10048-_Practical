#include <stdio.h>

int main() {
    int a,count=0;
    for(int i=1;i<=30;i++){
        scanf("%d",&a);
        if(a==1) count++;
    }
    printf("Present=%d",count);
    return 0;
}
