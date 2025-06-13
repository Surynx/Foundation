#include<stdio.h>

void main(void){

    int row,cols,space;
//upper
    for(row=0;row<4;row++){

        for(space=3;space>row;space--){

            printf(" ");
        }

        for(cols=0;cols<=row;cols++){

            if(cols==0 || cols==row){

                printf("* ");
            }else{

                printf("  ");
            }
        }

        
        printf("\n");
    }
    //lower
    for(row=1;row<=3;row++){

        for(space=1;space<=row;space++){

            printf(" ");
        }

        for(cols=3;cols>=row;cols--){

            if(cols==3 || cols==row){

                printf("* ");
            }else{

                printf("  ");
            }
        }

        
        printf("\n");
    }
  
}