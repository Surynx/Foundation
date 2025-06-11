#include<stdio.h>

void main(void){

    int row,cols,height=5,space;

    for(row=1;row<=height;row++){

        for(space=1;space<row;space++){

            printf("  ");
        }

        int start=1;

        for(cols=height*2-row;cols>=row;cols--){

            printf("%d ",start);
            start++;
        }

        printf("\n");
    }

    
}