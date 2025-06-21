#include<stdio.h>
#include<stdbool.h>

void main(void)
{
    int arr[]={1,1,2,2,5,5,6,8,1};
    int size=sizeof(arr)/sizeof(arr[0]),i,j,sum=0,count=0;
    int visited[size];
    bool is_unique;

    for(i=0;i<size;i++)
    {
        visited[i]=0;
    }

    for(i=0;i<size-1;i++)
    {
        if(visited[i]==1) continue;

       is_unique=true;
       for(j=i+1;j<size;j++)
       {
        if(arr[i]==arr[j])
        {
            is_unique=false;
            visited[j]=1;
        }
       }

       if(is_unique)
       {
        sum+=arr[i];
        count++;
       }
    }

    int aver=sum/count;
    printf("Average:%d",aver);
}