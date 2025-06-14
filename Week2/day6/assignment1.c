#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main(void){

    int *arr,size,i,j;
    bool is_prime;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    arr=malloc(size*sizeof(int));

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("prime numbers are:");
    for(i=0;i<size;i++){
        if(arr[i]<2){
            continue;
        }
        is_prime=true;
        for(j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                is_prime=false;
            }
        }
        if(is_prime){
            printf("{%d}",arr[i]);
        }
    }
    free(arr);
}