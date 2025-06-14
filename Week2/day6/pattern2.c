#include<stdio.h>

void main(void){
    int height=6,row,col,col2;
    for(row=1;row<=height;row++){
        for(col=1;col<=row;col++){
            printf("%d ",row);
        }
        for(col2=row+1;col2<=height;col2++){
            printf("%d ",col2);
        }
        printf("\n");
    }
    
}