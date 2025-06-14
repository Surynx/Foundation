#include<stdio.h>

void main(void){

    int arr[]={1,2,3,4,5},size=5,i;
    i=0;
    while(i<5/2){

        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
        i++;
    }

    for(i=0;i<size;i++){

        printf("{%d}",arr[i]);
    }
    
}