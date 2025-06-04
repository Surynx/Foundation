#include<stdio.h>

int factorial(int number,int *flag){
    int fact=1;
    if(number>0){
    for(int i=number;i>0;i--){
       fact*=i;
       
    }
}else{
    printf("Invalid");
    *flag=0;
}
    return fact;
}

void main(void){
    int number,flag=1;
    printf("Enter the number:");
    scanf("%d",&number);
    int result=factorial(number,&flag);

    if(flag==1){
    printf("Factorial of %d is:%d",number,result);
}
}