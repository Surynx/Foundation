#include<stdio.h>
#include<stdlib.h>

void main(void){

    int *arr,i;
    int size;
    printf("Enter the size:");
    
    scanf("%d",&size);

    arr=malloc(size*sizeof(int));

    for(i=0;i<size;i++){

        scanf("%d",&arr[i]);
    }

    for(i=0;i<size/2;i++){

        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;

    }

     for(i=0;i<size;i++){

        printf("%d",arr[i]);
    }

    free(arr);


}