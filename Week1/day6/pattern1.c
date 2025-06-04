#include<stdio.h>

void main(void){
    int row;
    char alphabet='A';
    for(row=1;row<=5;row++){
        for(int column=0;column<row;column++){
            printf("%c ",alphabet);
            alphabet++;
        }
        printf("\n");
    }
}