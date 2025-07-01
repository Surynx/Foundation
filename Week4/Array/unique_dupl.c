#include<stdio.h>

void main(void)
{
  int arr[] = {1, 2, 3, 2, 4, 5, 3, 6, 7, 5};
  int size=sizeof(arr)/sizeof(arr[0]),i,j,visited[size];

  for(i=0;i<size;i++)
  {
    visited[i]=0;
  }

  for(i=0;i<size;i++)
  {
    if (visited[i]==1) continue;

    for(j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
            visited[j]=1;
            visited[i]=2;
        }
    }
  }

  printf("Unique elements:");
  for(i=0;i<size;i++)
  {
    if(visited[i]==0)
    {
        printf("%d ",arr[i]);
    }
  }

  printf("\nDuplicate elements:");
  for(i=0;i<size;i++)
  {
    if(visited[i]==2)
    {
        printf("%d ",arr[i]);
    }
  }




}