#include<stdio.h>
#include<stdbool.h>

void main(void)
{
   int arr[]={8, 10, 23, 45, 2, 67},size=6,i,j,large_prime=0;
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
           if(large_prime<arr[i])
           {
            large_prime=arr[i];
           }
       }
    }

    if(large_prime==0) printf("There is no prime numbers");
    else printf("Largest prime number is :%d",large_prime);

}