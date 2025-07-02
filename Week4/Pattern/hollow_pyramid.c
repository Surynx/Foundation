#include<stdio.h>

void main(void)
{
   int i,row=5,j,k;

   //row
   for(i=0;i<row;i++)
   {

    //space
    for(j=0;j<row-i;j++)
    {
        printf("  ");
    }

    //star
    for(k=0;k<(i+1)*2-1;k++)
    {
        if(k==0 || k+1==(i+1)*2-1 || i==row-1)
        {
            printf("* ");
        }else{
            printf("  ");
        }
    }

    //next line
    printf("\n");
   }
}