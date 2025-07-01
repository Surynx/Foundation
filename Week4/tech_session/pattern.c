#include<stdio.h>

void main(void)
{
   int i,j,row=9,limit=2,limit2=1;

   for(i=1;i<=row;i++)
   {
        if(i==limit2)
        {
            for(j=1;j<=limit;j++)
            {
                printf("* ");
            }

            limit+=2;
            limit2+=4;
        }
        else
        {
            printf("*");
        }

        printf("\n");
   }
}