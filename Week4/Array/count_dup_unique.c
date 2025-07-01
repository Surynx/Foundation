#include<stdio.h>
#include<stdbool.h>

void main(void)
{
   int arr[]={1,1,1,3,5,6,5,4,8,0,3,10},i,j;
   int size=sizeof(arr)/sizeof(arr[0]),visited[size],duplicate=0,unique=0;
   bool is_duplicate;

   for(i=0;i<size;i++)
   {

      if(visited[i]==1) continue;

       is_duplicate=false;  
       for(j=i+1;j<size;j++)
       {
        if(arr[i]==arr[j])
        {
            visited[j]=1;
            is_duplicate=true;
        }
       }

       if(is_duplicate) duplicate++; 
       else unique++;
   }

   printf("Duplicate elements:%d",duplicate);

   printf("\nUnique Elements:%d",unique);

}