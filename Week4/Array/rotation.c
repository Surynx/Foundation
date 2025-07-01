#include<stdio.h>

void main(void)
{
   int arr[5] = {1, 2, 3, 4, 5},num,i,j,size=5;

   printf("Enter the no of rotation:");
   scanf("%d",&num);

   for(i=0;i<num;i++)
   {
      int temp=arr[size-1];

      //swift
      for(j=size-2;j>=0;j--)
      {
         arr[j+1]=arr[j];
      }

      arr[0]=temp;
   }

   //print arr
   for(i=0;i<size;i++)
   {
      printf("%d ",arr[i]);
   }


}