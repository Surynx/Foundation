#include<stdio.h>

void main(void){
    int size=5,temp,arr[5],i,j;

    printf("Elements:");

    for(i=0;i<size;i++){

        scanf("%d",&arr[i]);

    }

    for(i=0;i<size;i++){

        for(j=i+1;j<size;j++){

            if(arr[i]<arr[j]) {

              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
            
            }

        }
    }

    for(i=0;i<size;i++){

        printf("%d",arr[i]);

    }
}