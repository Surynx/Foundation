#include<stdio.h>

int maximum(int a,int b,int c){
    int greatest=a;
    if(b>greatest){
        greatest=b;
    }
    if(c>greatest){
        greatest=c;
    }
    printf("Large number is:%d\n",greatest);
}

void main(void){
    maximum(3,10,5);

    maximum(1,2,3);
}