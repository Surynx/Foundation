#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main(void){

    int *arr,size,i;
   
    printf("Enter the size of the array:");
    scanf("%d",&size);

    arr=malloc(size*sizeof(int));

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int smallest=arr[0];

    for(i=1;i<size;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }

    printf("The largest number is:%d",smallest);
    return EXIT_SUCCESS;
}