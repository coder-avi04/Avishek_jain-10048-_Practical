#include <stdio.h>

void grade(float avg){
    if(avg>=90) printf("A");
    else if(avg>=80) printf("B");
    else if(avg>=70) printf("C");
    else if(avg>=60) printf("D");
    else printf("F");
}

int main() {
    float m1,m2,m3,avg;
    scanf("%f%f%f",&m1,&m2,&m3);
    avg=(m1+m2+m3)/3;
    grade(avg);
    return 0;
}
