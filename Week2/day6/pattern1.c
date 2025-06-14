#include<stdio.h>

void main(void){
    int height=5,row,col;
    for(row=1;row<=height;row++){
        int start=1;
        for(col=height;col>=row;col--){
            printf("%d ",start);
            start++;
        }
        for(col=height-row;col>0;col--){
            printf("%d ",col);
        }
        printf("\n");
    }
}