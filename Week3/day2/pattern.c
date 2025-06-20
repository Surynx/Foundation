#include<stdio.h>

void main(void)
{
    int i,j,height=6;

    for(i=1;i<=height;i++)
    {
        for(j=1;j<=i;j++)
        {
            (j%2 != 0)  ? printf("%d ",i*j) : printf("* ");
        }

        printf("\n");
    }
}