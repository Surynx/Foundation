#include<stdio.h>

void main(void)
{
   int i,j,row=9,limit=5;
   
   for(i=1;i<=row;i++)
   {
    if(i<=5)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d ",j);
        }
    }
    else
    {
        for(j=1;j<limit;j++)
        {
            printf("%d ",j);
        }
        limit--;
    }
    
    //next line
    printf("\n");
   }
}