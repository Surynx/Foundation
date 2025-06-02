#include<stdio.h>

void main(void){

    int row,column,count=50;
    for(row=0;row<4;row++){
       for(column=0;column<=row;column++){
        printf("%d ",count);
        count-=5;
       }
        printf("\n");
    }
        
    }


