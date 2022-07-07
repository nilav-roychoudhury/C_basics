#include<stdio.h>
int main(){
    int a,c;
    int b = 1000;
    printf("enter amount you want to withdraw \n");
    scanf("%d",&c);
    if(b<=500){
        printf("insufficient balance");

    }
    else if(b>500)
    {
        printf("transaction successful");


    }
    

    return 0;

    
    

}