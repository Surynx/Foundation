#include<stdio.h>

void main(void)
{
    int i,row=5,j,k;

    for(i=1;i<=row;i++)
    {
        for(j=0;j<=row-i;j++)
        {
            printf("  ");
        }

        for(k=1;k<=i*2-1;k++)
        {
            if(k==1 || k==i*2-1 || i==row)
            {
            printf("%d ",k);
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

}