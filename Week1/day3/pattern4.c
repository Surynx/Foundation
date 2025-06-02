#include<stdio.h>

void main(void){
    int row,star;
    for(row=0;row<5;row++){
        for(star=5;star>row;star--){
            printf("* ");
        }
        printf("\n");
    }
}