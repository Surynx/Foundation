#include<stdio.h>
#include<stdbool.h>

void main(void)
{
   int arr[] = {3, -2, 5, 3, -2, 7, -8, 5, 9, -8, 10},size=11,i,j;
   int visited[11]={0};

    bool unique;

    printf("Unique elemnts:");
    for(i=0;i<size;i++)
    {
        if(visited[i]==1) continue;

        unique=true;
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                unique=false;
                visited[j]=1;
            }
        }

        if(unique)
        {
            printf("%d ",arr[i]);
        }
    }


}