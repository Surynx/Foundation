#include<stdio.h>

void main(void){
   for(int row=1;row<=5;row++){
       for(int number=1;number<=row;number++){
        if(number%2==0){
            printf("0 ");
        }else{
            printf("1 ");
        }
       }
       printf("\n");
   }
    
}