#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

void main(void)
{
   int arr[]={8, 9, 11, 4, 15, 18},size=6,i,j,small_prime=INT_MAX;
   bool is_prime;

   for(i=0;i<size;i++)
   {
    if(arr[i]<2) continue;

       is_prime=true;

       for(j=2;j<=arr[i]/2;j++)
       {
        if(arr[i] % j ==0)
        {
            is_prime=false;
        }
       }

       if(is_prime)
       {
           if(small_prime>arr[i])
           {
            small_prime=arr[i];
           }
       }
    }

    if(small_prime==INT_MAX) printf("There is no prime numbers");
    else printf("Largest prime number is :%d",small_prime);

}