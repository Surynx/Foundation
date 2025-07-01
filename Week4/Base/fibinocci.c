#include<stdio.h>

void main(void)
{
    int limit,i,a=0,b=1,c;

    printf("Enter the limit:");
    scanf("%d",&limit);

    printf("%d %d ",a,b);

    for(i=0;i<limit-2;i++)
    {
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
}