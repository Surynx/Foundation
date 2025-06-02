#include<stdio.h>

void main(void){
    int row,space,star;
    int limit;
    printf("Enter the limit:");
    scanf("%d",&limit);
    for(row=1;row<=limit;row++){
       for(space=0;space<row;space++){
        printf(" ");
       }
       for(star=limit;star>row;star--){
        printf("* ");
       }
       printf("\n");
   
}
}