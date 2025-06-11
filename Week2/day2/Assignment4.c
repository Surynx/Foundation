#include<stdio.h>

void main(void){
    int arr1[3],size=3,arr2[3],sorted[6]={0};
     
    printf("Elements of 1 array:");

    for(int i=0;i<size;i++){

        scanf("%d",&arr1[i]);
    }
    printf("Elements of 2 array:");

    for(int i=0;i<size;i++){
        
        scanf("%d",&arr2[i]);
    }

    for(int i=0;i<size;i++){

        sorted[i]=arr1[i];
        sorted[i+3]=arr2[i];
    }
    



   int i,j,temp;
    for(i=0;i<size*2;i++){

        for(j=i+1;j<size*2;j++){

            if(sorted[i]>sorted[j]){
            
                temp=sorted[i];
                sorted[i]=sorted[j];
                sorted[j]=temp;

            }
        }
    }
    
    printf("Sorted array:");
    
    for(int i=0;i<size*2;i++){
        printf("%d\n",sorted[i]);
    }
}