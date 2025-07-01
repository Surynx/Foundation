#include<stdio.h>

void main(void)
{
   int arr[]={1, 2, 3, 4, 6},size=5,n=arr[size-1],miss_num=0,sum=0,i;

   int real_sum=(n*(n+1))/2;

   for(i=0;i<size;i++)
   {
       sum+=arr[i];
   }

   miss_num=real_sum-sum;

   printf("Missing number is:%d",miss_num);
   
}