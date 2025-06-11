#include<stdio.h>

void main(void){
    int arr[5],size=5;
     
    printf("Elements:");

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int i,j,temp;
    for(i=0;i<size;i++){

        for(j=i+1;j<size;j++){

            if(arr[i]>arr[j]){
            
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("Ascending Order:");
    
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}