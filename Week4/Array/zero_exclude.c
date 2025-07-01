#include<stdio.h>

void main(void)
{
    int arr[] = {0, 1, 2, 0, 2, 3, 0, 3, 3},size=9,i,j;
    int visited[9]={0},count;

    for(i=0;i<size;i++)
    {
        count=1;
        if(visited[i]==1  || arr[i]==0) continue;

        //frequency
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                visited[j]=1;
                count++;
            }
        }


        printf("%d appears %d times\n",arr[i],count);


    }
}





