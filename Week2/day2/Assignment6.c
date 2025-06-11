#include<stdio.h>
#include<stdlib.h>

void main(void){

    int temp,i,j,count=0,*arr,size;

    printf("Size of array");
    scanf("%d",&size);

    arr=malloc(size*sizeof(int));
    

    for(i=0;i<size;i++){

        scanf("%d",&arr[i]);

    }
    

    for(i=0;i<size;i++){

        for(j=i+1;j<size;j++){

            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
    }

    printf("Unique elements:");

    for(i=0;i<size;i++){

        if(i==0 || arr[i]!=arr[i-1]){

            count++;
            printf("{%d}",arr[i]);
        }
    }

    printf("\ncount:%d",count);
    free(arr);
    
}