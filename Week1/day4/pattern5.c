#include<stdio.h>

void main(void){
    int row,number,star;
    for(row=1;row<=4;row++){
        for(number=1;number<=5-row;number++){
            printf("%d ",number);
        }
        for(star=0;star<2*row-2;star++){
            printf("*  ");
        }
        
        for(number=5-row;number>=1;number--){
            printf("%d ",number);
        }
        
        
        printf("\n");
    }
}