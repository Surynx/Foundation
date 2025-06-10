#include<stdio.h>

void main(void){
    int array[100],limit;
    printf("Limit:");
    scanf("%d",&limit);
    for(int i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }
    printf("Array:\n");
    for(int i=0;i<limit;i++){
        printf("{%d}",array[i]);
    }
}