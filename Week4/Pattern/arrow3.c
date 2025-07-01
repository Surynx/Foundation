#include<stdio.h>

void main(void)
{
   int i,j,row=9,limit=4;

   //row
   for(i=1;i<=row;i++)
   {
    
    //firsthalf
    if(i<=5)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d ",j);
        }

        for(j=i-1;j>0;j--)
        {
            printf("%d ",j);
        }
    }
    //second half
    else
    {
        for(j=1;j<=limit;j++)
        {
            printf("%d ",j);
        }
        for(j=limit-1;j>0;j--)
        {
            printf("%d ",j);
        }

        limit--;
    }

    //next line
    printf("\n");
   }
}