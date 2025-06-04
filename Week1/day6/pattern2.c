#include<stdio.h>

void main(void){
    int row,column;
    char alphabet='A';
    for(row=1;row<=5;row++){
        for(int space=5;space>row;space--){
            printf(" ");
        }
        for(column=0;column<row;column++){
            printf("%c ",alphabet);
            alphabet++;
        }
        printf("\n");
    }
    
}