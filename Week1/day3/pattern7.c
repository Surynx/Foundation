#include<stdio.h>

void main(void){
    int row,space,star;
    int limit;
    printf("Enter the limit:");
    scanf("%d",&limit);
    for(row=0;row<limit;row++){
       for(space=limit;space>row;space--){
        printf(" ");
       }
       for(star=0;star<=row;star++){
        printf("* ");
       }
       printf("\n");
   
}
}