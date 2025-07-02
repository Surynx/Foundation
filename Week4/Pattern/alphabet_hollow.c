#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j,k,row=5;
    char c;

    for(i=1;i<=row;i++)
    {
        for(k=0;k<row-i;k++)
        {
            printf("  ");
        }

        c='A';
        for(j=0;j<i*2-1;j++)
        {
            
            if(j==0 || j==i*2-2 || i==row)
            {
                printf("%c ",c);
            }
            else
            {
                printf("  ");
            }

            c++;

        }

        printf("\n");
    }
}