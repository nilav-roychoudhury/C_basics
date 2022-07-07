#include<stdio.h>

int main(){
    int a,n=1,fact=1;
    printf("enter the number \n");
    scanf("%d",&a);
    while(n<=a){
        fact=fact*n;
        n=n+1;
    }
    printf("factorial is %d",fact);
    
    return 0;
}