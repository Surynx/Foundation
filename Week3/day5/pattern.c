#include<stdio.h>

void main(void)
{
    int i,j,start,row=5;

    for(i=1;i<=row;i++)
    {
        start=i;
        for(j=1;j<=i*2-1;j++)
        {
           if(j%2 != 0)
           {
            printf("%d",start);
            start+=i;
           }
           else
           {
            printf("*");
           }
        }
        printf("\n");
    }
}