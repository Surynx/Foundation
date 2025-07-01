#include<stdio.h>

void main(void)
{
    int num,sum=0,rem;
    printf("Enter the number:");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }

    printf("Sum of digits:%d",sum);
}