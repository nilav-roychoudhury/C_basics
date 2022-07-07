#include<stdio.h>

int main(){
    int a,fact=1;
    printf("enter the number\n");
    scanf("%d",&a);
    while(a!=0){
        fact=fact*a;
        a=a-1;   
    }
    printf("factorial is %d",fact);
    return 0;
}