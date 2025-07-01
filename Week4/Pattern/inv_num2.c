#include<stdio.h>

void main(void)
{
   int i,j,row=5;

   for(i=1;i<=row;i++)
   {
    for(j=i;j<=row;j++)
    {
        printf("%d",i);
    }
    printf("\n");
   }
}