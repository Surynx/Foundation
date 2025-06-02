#include<stdio.h>

void main(void){
   for(int row=1;row<=5;row++){
    for(int star=1;star<=row*2;star++){
        printf("* ");
    }
    printf("\n");
   }
    
}