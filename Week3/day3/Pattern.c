#include<stdio.h>

void main(void)
{
    int num=50,i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",num);
            num-=5;
        }

        printf("\n");
    }
}