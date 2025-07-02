#include<stdio.h>

void main(void)
{
   int arr[]={1,5,7,2,0,14,5},size=7,i,sum=0;

   for(i=0;i<size;i++)
   {
    if(arr[i]%7 == 0)
    {
        arr[i]=10;
    }
   }

   for(i=0;i<size;i++)
   {
   printf("%d ",arr[i]);
   }
}