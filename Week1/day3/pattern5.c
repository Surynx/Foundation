#include<stdio.h>

void main(void){
    int row,star,space;
    for(row=1;row<=5;row++){
        for(space=5;space>row;space--){
            printf("  ");
        }
        for(star=0;star<row;star++){
            printf("* ");
        }
        printf("\n");
    }
}