#include<stdio.h>

void main(void){

    int rows,cols,height=5;

    for(rows=1;rows<=height;rows++){

        for(cols=0;cols<rows;cols++){

            if(rows%2!=0){

                printf("1 ");
            }else{

                printf("0 ");
            }
        }

        printf("\n");
    }
}