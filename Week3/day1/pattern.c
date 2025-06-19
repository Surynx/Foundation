#include<stdio.h>

void main(void)
{
    int row,cols,height=4;

    for(row=1;row<=height;row++)
    {
        printf("*\n");
        for(cols=1;cols<=row;cols++)
        {
            printf("* * *\n");
        }
    }
}