#include<stdio.h>

void main(void)
{
   int i,j,k,row=5;

   for(i=row;i>0;i--)
   {
    //space
    for(j=row;j>i;j--)
    {
        printf("  ");
    }

    //star
    for(k=1;k<=i*2-1;k++)
    {
        if(k==1 || k==i*2-1 || i==5) printf("%d ",k);

        else printf("  ");

    }

    //next line
    printf("\n");
   }
}