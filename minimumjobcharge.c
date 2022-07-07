#include<stdio.h>
#define mjc 150
#define cph 100
int main(){
    double h,c,ccp;
    printf("enter total hours worked\n");
    scanf("%lf",&h);
    printf("enter cost of parts(ccp)\n");
    scanf("%lf",&ccp);
    c=h*cph+ccp;
    if (c<mjc){
        c=mjc;
        printf("charge= %lf",c);     
    }
    else{
    //    c=h*cph+ccp;
        printf("charge= %lf",c);
    }
    //c=h*cph+ccp;
    //printf("charge= %lf",c);
    // printf("ccp= %f",&ccp);
    return 0;
}