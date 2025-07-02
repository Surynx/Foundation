#include<stdio.h>

void main(void)
{
   int i,j,row=5;

   for(i=0;i<row;i++)
   {
    for(j=0;j<row;j++)
    {
        if(j==0 || j==row-1 || (i>=2 && (j==i || j==row-i-1 )))
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }

    printf("\n");
   }
}