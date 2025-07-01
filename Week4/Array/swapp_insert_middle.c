#include<stdio.h>

void main(void)
{
   int arr[5]={4,7,9,1},size=4,temp,i,num;

   //reverse
   for(i=0;i<size/2;i++)
   {
      temp=arr[i];
      arr[i]=arr[size-i-1];
      arr[size-i-1]=temp;
   }

   printf("Enter the number to insert:");
   scanf("%d",&num);

   //insert
   for(i=size-1;i>=size/2;i--)
   {
     arr[i+1]=arr[i];
   }
   arr[size/2]=num;
   size++;

   //print
   for(i=0;i<size;i++)
   {
    printf("%d ",arr[i]);
   }
} 