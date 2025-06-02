#include<stdio.h>

void main(void){
    int num1,num2,num3;
    
    printf("Enter the three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("Largest Number:");
    if(num1>num2 && num1>num3){
        printf("%d",num1);
    }else if(num2>num3 && num2>num1){
        printf("%d",num2);
    }else{
        printf("%d",num3);
    }
}