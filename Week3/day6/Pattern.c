#include<stdio.h>

void main(void)
{
    int i,j,row=9,limit=4;
    for(i=1;i<=row;i++)
    {
        if(i%2 != 0)
        {
            printf("*");
        }
        else
        {
            for(j=0;j<limit;j++)
            {
                printf("* ");
            }
            limit++;
        }

        //next line
        printf("\n");
    }
}