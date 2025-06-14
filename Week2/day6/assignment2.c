#include<stdio.h>
#include<stdlib.h>



int main(void){

    int *arr,size,i;
    
    printf("Enter the size of the array:");
    scanf("%d",&size);

    arr=malloc(size*sizeof(int));

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int largest=arr[0];

    for(i=1;i<size;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }

    printf("The largest number is:%d",largest);
    return EXIT_SUCCESS;
}