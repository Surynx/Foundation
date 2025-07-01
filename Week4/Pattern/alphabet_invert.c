#include<stdio.h>

void main(void)
{
  int i,j,row=5,k;
  char c;
  
  //row
  for(i=row;i>0;i--)
  {
    c='A';
    //space
    for(k=i;k<row;k++)
    {
        printf("  ");
    }

    //alphabet
    
    for(j=0;j<i*2-1;j++)
    {
    if(i==row || j==0 || j==(i*2-1)-1)
    {
       printf("%c ",c);
       
    }
    else
    {
        printf("  ");
    }
    c++;
    }
    //nextline 
    printf("\n");
  }
}