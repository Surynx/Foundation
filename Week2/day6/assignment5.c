#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main(void){

    int *arr,size,i,j,sum=0;
    bool is_prime;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    arr=malloc(size*sizeof(int));

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

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
            for(int x=i;x<size;x++){
                arr[x]=arr[x+1];
               
            }
             size--;
        }
    }
    for(i=0;i<size;i++){
        printf("{%d}",arr[i]);
    }
}