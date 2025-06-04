#include<stdio.h>

void main(void){
   int row,column;
   for(row=0;row<7;row++){
    for(column=0;column<7;column++){
        if(column==row||column==6-row){
            printf("* ");
        }else{
            printf("  ");
        }
    }
    printf("\n");
   }
    
}