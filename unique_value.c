#include<stdio.h>
#include<stdlib.h>

void main(void){

    int i,j,count=0,*arr,size,*visited;

    printf("Size of array");
    scanf("%d",&size);

    arr=malloc(size*sizeof(int));
    visited=malloc(size*sizeof(int));
    

    for(i=0;i<size;i++){

        scanf("%d",&arr[i]);
        visited[i]=0;

    }

    for(i=0;i<size;i++){

        for(j=i+1;j<size;j++){

            if(arr[i]==arr[j]){

                visited[j]=1;
            }
        }
    }

    printf("Unique Elements:");

    for(i=0;i<size;i++){

        if(visited[i] != 1){

            printf("{%d}",arr[i]);
            count++;
        }
    }


    printf("\nCount:%d",count);

    
    free(arr);
    free(visited);
    
}