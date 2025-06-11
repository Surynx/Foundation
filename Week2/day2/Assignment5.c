#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main(void){
    int *arr,first_large,second_large,i,size,temp;

    printf("Enter the array size:");
    scanf("%d",&size);

    arr=malloc(size*sizeof(int));

    printf("Elements:");

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    first_large=INT_MIN;
    
    for(i=0;i<size;i++){

        if(first_large<arr[i]){
            
            temp=first_large;
            first_large=arr[i];
            second_large=temp;

        }else if(second_large<arr[i] && arr[i]!=first_large){

            second_large=arr[i];
            

        }
    }

    printf("%d <---Second largest",second_large);

    free(arr);


}