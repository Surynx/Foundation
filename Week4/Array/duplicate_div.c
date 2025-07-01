#include<stdio.h>
#include<stdbool.h>

void main(void)
{
   bool is_duplicate;
   int arr[] = {1, 2, 3, 2, 4, 5, 3, 6, 7, 5,4},size=sizeof(arr)/sizeof(arr[0]);
   int i,j,num,div[10],visited[11]={0},count=0,k=0;

   printf("Enter the number:");
   scanf("%d",&num);

   for(i=0;i<size;i++)
   {

    if(visited[i]==1) continue;

    is_duplicate=false;

    //check
    for(j=i+1;j<size;j++)
    {
        if(arr[i]==arr[j])
        {
           visited[j]=1;
           is_duplicate=true;
        }
    }

    if(is_duplicate)
    {
        if(arr[i]%num == 0)
        {
            count++;
            div[k++]=arr[i];
        }
    }
   }

   printf("Count of duplicate numbers divisible by %d: %d",num,count);
   printf("\nNumbers are:");
   for(i=0;i<count;i++)
   {
    printf(" %d ",div[i]);
   }
}




