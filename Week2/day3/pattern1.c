#include<stdio.h>

void main(void){

    int row,cols,height=5;

    for(row=0;row<height;row++){

        for(cols=1;cols<=height;cols++){

            if(row==0 || row==height-1 || cols==height-row){

                printf("* ");
            }else{

                printf("  ");
            }
        }
        printf("\n");

    }
}