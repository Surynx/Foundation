#include<stdio.h>

void main(void){

    int row,col,height=5;

    for(row=1;row<=height;row++){

        for(col=1;col<=row;col++){

            if(col==1 || col==row || row==height){

                printf("%d ",col);
            }else{

                printf("  ");
            }
        }
        printf("\n");
    }
}