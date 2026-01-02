#include <stdio.h>

int main() {
    int ch,n;
    do{
        scanf("%d",&ch);
        if(ch==1){
            scanf("%d",&n);
            for(int i=1;i<=10;i++)
                printf("%d x %d = %d\n",n,i,n*i);
        }
    }while(ch!=0);
    return 0;
}
