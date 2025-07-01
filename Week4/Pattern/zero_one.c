#include<stdio.h>

void main(void)
{
    int i,j,row=5;

    for(i=1;i<=row;i++)
    {
        for(j=0;j<row;j++)
        {
            if(i%2 != 0) printf("1");
            else printf("0");
        }

        printf("\n");
    }
}