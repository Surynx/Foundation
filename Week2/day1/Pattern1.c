#include<stdio.h>

void main(void){
    int rows,cols,height=6;
    for(rows=1;rows<=height;rows++){
        for(cols=0;cols<=rows*rows;){
            printf("%d ",cols);
            cols+=rows;
        }

        printf("\n");
    }
}