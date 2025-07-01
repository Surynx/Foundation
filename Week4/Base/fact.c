#include<stdio.h>

//recursion
int fact(int num)
{
    int result;
    if(num<1)
    {
        return 1;
    }

    return num=num*fact(num-1);
}

void main(void)
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int c=fact(num);
    printf("Factorial is:%d",c);
}