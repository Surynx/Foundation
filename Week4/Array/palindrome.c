#include<stdio.h>
#include<stdbool.h>

void main(void)
{
   int arr[]={1,2,3,2,1},size=sizeof(arr)/sizeof(arr[0]);
   int i,j;
   bool is_palindrome=true;

   //check
   for(i=0;i<size/2;i++)
   {
    if(arr[i]!=arr[size-i-1])
    {
       is_palindrome=false;
       break;
    }
   }

   if(is_palindrome) printf("palindrome...!");
   else printf("Not palindoem...!");


}