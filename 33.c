#include <stdio.h>

void fact(int n,int *res){
    *res=1;
    for(int i=1;i<=n;i++) *res*=i;
}

int main() {
    int n,r;
    scanf("%d",&n);
    fact(n,&r);
    printf("%d",r);
    return 0;
}
