#include<stdio.h>
#include<stdbool.h>

void main(void){

    int arr[100],i,j,size=6,temp;
    bool is_unique=true;

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
    printf("duplicate Elements:");
    for(int i=0;i<size;i++){
        
        while(arr[i]==arr[i+1]){

            is_unique=false;
            i++;
        }
        if(!is_unique){

            printf("{%d}",arr[i]);
            is_unique=true;
        }
    }

    printf("\nUnique elements:");
    for(i=0;i<size;i++){
        is_unique=true;

        while(arr[i]==arr[i+1]){

            is_unique=false;
            i++;
            
        }

        if(is_unique){

            printf("{%d}",arr[i]);
        }
    }

   
}