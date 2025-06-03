#include<stdio.h>

void main(void){
    int row,star;
    //upper half
    for(row=1;row<=4;row++){
        if(row==4){
            for(star=0;star<6;star++){
            printf("* ");
        }
        }else{
        for(star=0;star<row*2-1;star++){
            printf("* ");
        }
    }
        
        printf("\n");
    }
    for(row=1;row<=4;row++){
        for(star=0;star<=5-(row*2-1);star++){
            printf("* ");
        }
        
        printf("\n");
    }
}