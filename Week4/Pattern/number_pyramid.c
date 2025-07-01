#include<stdio.h>

void main(void)
{
    int i,j,row=5;

    for(i=1;i<=row;i++)
    {
        for(int k=row;k>i;k--)
        {
           printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%d ",i);
        }

        printf("\n");
    }
}