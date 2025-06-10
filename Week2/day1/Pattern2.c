#include<stdio.h>

int main(void){
    int row,space,star,height=5;
    for(row=1;row<=height;row++){
        for(star=0;star<row;star++){
            printf("* ");
        }
        for(space=0;space<(height-row)*2;space++){
            printf("  ");
        }
        for(star=0;star<row;star++){
            printf("* ");
        }
          
          printf("\n");
    }
}