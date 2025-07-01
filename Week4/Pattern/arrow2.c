#include<stdio.h>

void main(void)
{
   int i,j,row=9,limit=8;
   
   for(i=1;i<=row;i++)
   {
    //first half
    if(i<=5)
    {
    for(j=1;j<=i*2-1;j++)
    {
        printf("%d ",j);
    }
   }
   else
   {
    //second half
      for(j=1;j<limit;j++)
      {
        printf("%d ",j);
      }

      limit-=2;
   }
   printf("\n");
}
}