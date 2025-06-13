#include<stdio.h>
#include<stdbool.h>

void main(void){
     int arr[100],i,j,size;
     bool is_unique=true;

    printf("Enter size of array:");
    scanf("%d",&size);

      for(i=0;i<size;i++){

        scanf("%d",&arr[i]);
        
    }

    for(i=0;i<size;i++){

        for(j=i+1;j<size;j++){

            if(arr[i]==arr[j]){
               is_unique=false; 
               break;

            }
        }

        if(is_unique){

            printf("{%d}",i);
        }
    }

    if(is_unique){
        printf("Unique Array");
    }else{
        printf("Not unique");
    }
     
}