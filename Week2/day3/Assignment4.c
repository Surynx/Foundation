#include<stdio.h>
#include<stdlib.h>

void main(void){

    int *arr,size,i,j,temp,count;

    printf("Enter size of array:");
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

    for(i=0;i<size;){
         
        count=1;

        while(i+1<size && arr[i]==arr[i+1]){

            count++;
            i++;
        }

        printf("%d--->%d\n",arr[i],count);
        i++;

    }

    



    free(arr);
    



}