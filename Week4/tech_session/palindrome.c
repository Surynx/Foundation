#include <stdio.h>
#include<stdbool.h>

int main()
{
   
   char name[20];
   int length=0,i;
   bool is_palindrome;
   
   printf("Enter the string:");
   scanf(" %s",name);

   
   for(i=0;name[i]!='\0';i++)
   {
     length++;
   }
   
   is_palindrome=true;

   //check
   for(i=0;i<=length/2;i++)
   {
     if(name[i] != name[length-i-1])
     {
       is_palindrome=false;
       break;
     }
   }
   
   if(is_palindrome) printf("The string is palindrome..");
   else printf("The string is not palindrome..");
    
    
}