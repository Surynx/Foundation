#include<stdio.h>

void main(void)
{
    int i,j,row=5;

    for(i=1;i<=row;i++)
    {
        for(j=0;j<row;j++)
        {
            if(j== 0 || j==row-1 || i==1 || i==row) printf("1");
            else printf("0");
        }

        printf("\n");
    }
}