#include<stdio.h>

void main(void){
    int size=5,num;
    int array[6];
    printf("Elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the elment to insert:");
    scanf("%d",&num);
    
    for(int i=size-1;i>=0;i--){
        array[i+1]=array[i];

    }
    array[0]=num;
    printf("New array\n");
    for(int i=0;i<=size;i++){
        if(i==0){
        printf("%d <---New elment added !!\n",array[i]);
        }else{
            printf("%d\n",array[i]);
        }
    }

}