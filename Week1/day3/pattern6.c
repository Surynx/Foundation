#include<stdio.h>

void main(void){
    int row,space,star;
    for(row=0;row<5;row++){
        for(space=0;space<row;space++){
            printf("  ");
        }
        for(star=5;star>row;star--){
            printf("* ");
        }
           printf("\n");
    }
   
}