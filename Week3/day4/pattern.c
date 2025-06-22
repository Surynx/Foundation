#include<stdio.h>

void main(void)
{
   int i,j,row=10,no_star[]={2,1,5,2,2,8,3,3,3,11};

   for(i=0;i<row;i++)
   {
      for(j=0;j<no_star[i];j++)
      {
         printf("* ");
      }

      printf("\n");
   }
}