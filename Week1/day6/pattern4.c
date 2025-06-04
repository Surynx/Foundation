#include<stdio.h>

void main(void){
   int row,column;
   for(row=0;row<5;row++){
    for(column=0;column<5;column++){
        if(column==0 || column==4){
            printf("* ");
        }else if(column==row){
            printf("* ");
        }else{
            printf("  ");
        }
    }
    printf("\n");
   }
    
}