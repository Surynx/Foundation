#include<stdio.h>

void main(void)
{
  int arr[]={8, 4, 7, 2},i,temp;
  int size=sizeof(arr)/sizeof(arr[0]);
  
  //reverse without temp
  for(i=0;i<size/2;i++)
  {
    arr[i]=arr[i]+arr[size-i-1];
    arr[size-i-1]=arr[i]-arr[size-i-1];
    arr[i]=arr[i]-arr[size-i-1];
  }

  //print
  for(i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  
}