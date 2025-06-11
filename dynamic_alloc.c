#include<stdio.h>
#include<stdlib.h>

void main(void){
    
    int *arr,limit;
    printf("Enter the number of elements:");
    scanf("%d",&limit);

    arr=malloc(limit*sizeof(int));

    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<limit;i++){

        printf("%d",arr[i]);
    }

    free(arr);
    
    

    }
    
