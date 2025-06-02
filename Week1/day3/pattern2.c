#include<stdio.h>

void main(void){
   for(int row=0;row<5;row++){
    for(int star=0;star<=row;star++){
        printf("* ");
    }
    printf("\n");
   }
    
}