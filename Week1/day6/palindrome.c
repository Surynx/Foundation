#include<stdio.h>
#include<stdbool.h>

int main(void){
    int choice,length=0,number,temp,first,reverse=0;
    char string[100];
    bool is_palindrome;
      printf("1.string\n2.number\nselect:");
      scanf("%d",&choice);
      switch (choice)
      {
      case 1:
        
        printf("Enter the string:");
        scanf("%s",string);
        for(int i=0;string[i]!='\0';i++){
            length++;
        }
        is_palindrome=true;
        for(int i=0;i<length;i++){
            if(string[i]!=string[length-i-1]){
                is_palindrome=false;
            }
        }
        if(is_palindrome==true){
            printf("The string is palindrome");
        }else{
            printf("The string is not palindrome");
        }

        break;
    
    case 2:
        printf("Enter the number:");
        scanf("%d",&number);
        temp=number;
        while(number>0){
            first=number%10;
            reverse=reverse*10+first;
            number=number/10;
        }
         if(reverse==temp){
            printf("The string is palindrome");
        }else{
            printf("The string is not palindrome");
        }

        break;

      default:
        printf("Invalid");
        break;
      }
}