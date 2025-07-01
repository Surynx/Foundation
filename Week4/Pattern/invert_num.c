#include<stdio.h>

void main(void)
{
    int i,j,row=5;

    for(i=row;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%d ",i);
        }

        printf("\n");
    }
}