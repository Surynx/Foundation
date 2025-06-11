#include<stdio.h>

void main(void){
    int arr[5],size=5;
     
    printf("Elements:");

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size/2;i++){

        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;

    }
    
    printf("Reverse:");

    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}