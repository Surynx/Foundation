#include<stdio.h>

void main(void){

    int row,col,height=7,num=1;
    char c='A';
    for(row=1;row<=height;row++){

        for(col=0;col<row;col++){
            if(row%2!=0){
                printf("%c ",c);
            }else{
                printf("%d ",num);
            }

        }
         if(row%2!=0){
                c++;
            }else{
                num++;
            }
        
        printf("\n");

    }
}