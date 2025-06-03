#include<stdio.h>

int main(void){
    int star,row;
    for(row=0;row<7;row++){
        if(row==1 || row==6){
            for(star=0;star<3;star++){
                  printf("* ");
            }
        }
        else{
                printf("*");
            }
        printf("\n");
    }
}