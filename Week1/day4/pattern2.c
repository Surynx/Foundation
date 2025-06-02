#include<stdio.h>

void main(void){

    int row,number,space;
    //upper half
    for(row=1;row<10;row++){
        for(space=10;space>row;space--){
            printf(" ");
        }
        for(number=1;number<=row;number++){
            printf("%d ",number);
        }
        printf("\n");
    }

    //lower half
    for(row=9;row>0;row--){
        for(space=10;space>=row;space--){
            printf(" ");
        }
        for(number=1;number<row;number++){
            printf("%d ",number);
        }
        printf("\n");

    }
        
    }


