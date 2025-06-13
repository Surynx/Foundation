#include<stdio.h>
#include<stdlib.h>

void main(void){

    int *arr,size,i,j,visited[100]={0};

    printf("Size:");
    scanf("%d",&size);

    arr=malloc(size*sizeof(int));

    for(i=0;i<size;i++){

        scanf("%d",&arr[i]);
        
    }

    for(i=0;i<size;i++){


        if(visited[i] == 1){

            continue;
        }

        for(j=i+1;j<size;j++){
            

            if(arr[i]==arr[j]){

                arr[j]=-1;
                visited[j]=1;
            }
        }

    }

    for(i=0;i<size;i++){

        printf("{%d}",arr[i]);
    }

   

    free(arr);
}