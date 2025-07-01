#include<stdio.h>
#include<limits.h>

void main(void)
{
   int arr[]={32, 4, 71, 9, 55, 13, 19, 72},size=8,i,j;
   int large=INT_MIN,small=INT_MAX;

   for(i=0;i<size;i++)
   {
    if(large<arr[i])
    {
        large=arr[i];
    }

    if(small>arr[i])
    {
        small=arr[i];
    }
   }

   printf("Smallest number is:%d",small);
   printf("\nlargest number is:%d",large);
}