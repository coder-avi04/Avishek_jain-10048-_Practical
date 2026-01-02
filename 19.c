#include <stdio.h>

int main() {
    float u,total=0;
    for(int i=1;i<=7;i++){
        scanf("%f",&u);
        total+=u;
    }
    printf("Total Units=%.2f",total);
    return 0;
}
