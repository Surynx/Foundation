#include<stdio.h>
#include<stdbool.h>

void main(void)
{
    int arr[]={1,1,2,4,5,4,4,1,6,4,8},i,j;
    int size=sizeof(arr)/sizeof(arr[0]);
    int visited[size];

    bool is_unique;

    for(i=0;i<size;i++)
    {
        visited[i]=0;
    }

    for(i=0;i<size;)
    {
        if(visited[i]==1)
        {
            i++;
            continue;
        }

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
            //delete
            for(j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
                visited[j] = visited[j + 1];
            }
            size--;
        }
        else
        {
            i++;
        }


    }

    for(i=0;i<size;i++)
    {
        printf("{%d}",arr[i]);
    }
}