#include<stdio.h>

void main(void){

    int row,cols,space;

    for(row=1;row<=5;row++){

        for(space=1;space<=row;space++){

            printf(" ");
        }

        for(cols=5;cols>=row;cols--){
           
            if(cols==5 || cols==row){

                printf("%d ",row);
            }else{

                printf("  ");
            }

        }
        printf("\n");
    }

     for(row=4;row>=1;row--){

        for(space=1;space<=row;space++){

            printf(" ");
        }

        for(cols=5;cols>=row;cols--){
           
            if(cols==5 || cols==row){

                printf("%d ",row);
            }else{

                printf("  ");
            }

        }
        printf("\n");
    }
}


