#include<stdio.h>

void main(void){

    int row,number,space;
    for(row=0;row<5;row++){
        for(space=0;space<row;space++){
            printf("  ");
        }
        for(number=1;number<10-(row*2);number++){
            printf("%d ",number);
        }
        printf("\n");
    }
        
    }


