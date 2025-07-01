#include<stdio.h>

void main(void)
{
    int num1,num2,c,flag=0;
    char operator;

    printf("Enter the two numbers:");
    scanf(" %d %d",&num1,&num2);

    printf("Enter the operator:");
    scanf(" %c",&operator);

    switch (operator)
    {
    case '+':
        c=num1+num2;
        break;
    case '-':
        c=num1-num2;
        break;
    case '*':
        c=num1*num2;
        break;
    case '/':
        c=num1/num2;
        break;
    
    default:
        printf("Choose a proper operator...!");
        flag=1;
        break;
    }
    if(flag==0) printf("result:%d",c);
}