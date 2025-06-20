#include<stdio.h>
#include<stdbool.h>

void main(void)
{
   int arr[6],i,j,x;
   int size=sizeof(arr)/sizeof(int);
   
   bool is_duplicate;

   printf("Elements:");

   for(i=0;i<size;i++)
   {
    scanf("%d",&arr[i]);
   }

   for(i=0;i<size-1;i++)
   {
    
    for(j=i+1;j<size;)
    {
        is_duplicate=false;
        if(arr[i]==arr[j])
        {
          is_duplicate=true;
        }
        if(is_duplicate)
        {
            for(int x=j;x<size;x++)
            {
                arr[x]=arr[x+1];
            }
            size--;
        }else
        {
          j++;
        }
    }
   }

   for(i=0;i<size;i++)
   {
    printf("{%d}",arr[i]);
   }
   

}