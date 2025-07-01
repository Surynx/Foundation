#include<stdio.h>

void main(void)
{
    int i,j,row=5,k;

    for(i=row;i>0;i--)
    {
        //space
        for(k=row;k>i;k--)
        {
           printf("  ");
        }

        //star print
        for(j=i*2-1;j>0;j--)
        {
            if(j==i*2-1 || j==1 || i==5) printf("* ");
            else printf("  ");
            
        }

        printf("\n");
    }
}