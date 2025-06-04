#include<stdio.h>

void main(void){
    int row,column;
    char alphabet='A';
    for(row=0;row<4;row++){
    
        for(column=0;column<5;column++){
            printf("%c ",alphabet);
            alphabet++;
        }
        printf("\n");
    }
    
}