#include<stdio.h>

void main(void){

    int row;
    for(row=5;row>=1;row--){
        for(int number=1;number<=row*2-1;number++){
        if(number%2!=0){
                printf("%d ",number);
        }
        }
        
        printf("\n");
    }
        
    }


