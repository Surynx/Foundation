#include<stdio.h>

void main(void)
{
   int num=99,i,j,arr[20]={1,2,3,4,5},size=5;

   for(i=0;i<size;)
   {
    if(arr[i]%2 == 0)
    {
        int pos=i+1;

        //shift
        for(j=size-1;j>=pos;j--)
        {
            arr[j+1]=arr[j];
        }
        
        size++;
        arr[pos]=num;
        i+=2;
    }else
    {
        i++;
    }
   }

   for(i=0;i<size;i++)
   {
    printf("%d ",arr[i]);
   }
}