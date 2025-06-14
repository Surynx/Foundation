#include<stdio.h>

void main(void){

    int arr[]={1,2,3,4,5},size=5;

    for(int i=0;i<5/2;i++){

        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }

    for(int i=0;i<size;i++){

        printf("{%d}",arr[i]);
    }
    
}