#include<stdio.h>

void main(void)
{
  int i,j,row=5;
  
  for(i=1;i<=row;i++)
  {
    for(j=1;j<=row;j++)
    {
        if(j==1 || j==row || (j==i && i<=3) || (j==row-i+1 && i<=2))
        {
        printf("*  ");
        }
        else
        {
            printf("   ");
        }
    }

    printf("\n");
  }
}