#include<stdio.h>

void main(void){
    int number,result;
    printf("Enter the number:");
    scanf("%d",&number);
    printf("Multiplication Table!");
    for(int i=0;i<=10;i++){
        result=number*i;
        printf("\n%d X %d = %d",i,number,result);
    }
    
}