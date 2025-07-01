#include<stdio.h>
#include<stdbool.h>

void main(void)
{
    int arr[]={10, 11, 12, 13, 14, 15, 17, 18, 19},size=9,i,j,count=0;
    bool is_prime;
    
    printf("Prime numbers:");
    for(i=0;i<size;i++)
    {
        if(arr[i]<2) continue;

        is_prime=true;

         for(j=2;j<arr[i]/2;j++)
         {
             if(arr[i]%j==0)
             {
                 is_prime=false;
                 break;
             }
         }

         if(is_prime)
         {
            count++;
            printf("%d ",arr[i]);
         }
    }

    printf("\nToatal prime number:%d",count);
}