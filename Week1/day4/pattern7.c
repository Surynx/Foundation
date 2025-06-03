#include<stdio.h>

void main(void){
    int row,star;
    for(row=0;row<6;row++){
        if(row==0 || row==3){
            for(star=0;star<5;star++){
                printf("*");
            }
            
        }else{
            
                printf("*");
            
            
        }
        printf("\n");
    }
   
}