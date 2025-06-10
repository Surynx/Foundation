#include<stdio.h>

void main(void){
    int size=10,sum=0;
    int array[10];
    printf("Elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    printf("Sum:%d",sum);
}