#include <stdio.h>

int main() {
    float unit, bill;
    scanf("%f",&unit);

    if(unit<=100) bill=unit*2;
    else if(unit<=200) bill=unit*3;
    else bill=unit*5;

    printf("Bill=%.2f",bill);
    return 0;
}