#include<stdio.h>

void main(void)
{
  int arr[]=  {2, 3, 2, 5, 3, 3, 1, 10, 2},size=9,i,j,count;

  //sort
  for(i=0;i<size-1;i++)
  {
    for(j=i+1;j<size;j++)
    {
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
  }

  for(i=0;i<size;i++)
  {
    count=1;
    while(arr[i]==arr[i+1] && i<size-1)
    {
        count++;
        i++;
    }

    printf("%d--->%d\n",arr[i],count);
  }


}