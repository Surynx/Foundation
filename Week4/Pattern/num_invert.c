#include<stdio.h>

void main(void)
{
   int i,j,row=5;

   for(i=row+1;i>1;i--)
   {
    for(j=i-1;j>0;j--)
    {
        printf("%d ",j);
    }

    //next line.
    printf("\n");
   }
}