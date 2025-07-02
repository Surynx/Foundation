#include<stdio.h>
#include<stdbool.h>

void main(void)
{
    int arr[]={4, 5, 6, 4, 5, 4, 7},size=7,i,j,visited[7]={0};
    int freq[7],num[7],count,n=0,print;
    //bool found;

    for(i=0;i<size;i++)
    {
        if(visited[i]==1) continue;

        count=1;
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                visited[j]=1;
            }
        }

        //printf("%d appears %d times\n",arr[i],count);
        
        num[n]=arr[i];
        freq[n]=count;
        n++;
    }


    for(i=1;i<=size;i++)
    {
        print=0;
        for(j=0;j<n;j++)
        {
           
            if(i==freq[j])
            {
                 if(print==0)
                {
                    printf("Elements appearing %d times:",i);
                    print=1;
                }
                printf("%d ",num[j]);
            }
        }
        if(print==1) printf("\n");
    }

    

    

}