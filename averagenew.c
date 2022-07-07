#include<stdio.h>

int main(){
    float a,b,c,avg;
    printf("enter a\n");
    scanf("%f",&a);
    printf("enter b\n");
    scanf("%f",&b);
    printf("enter c\n");
    scanf("%f",&c);
    avg=(a+b+c)/3;
    printf("average is %f",avg);
    return 0;
}