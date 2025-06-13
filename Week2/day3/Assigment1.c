#include<stdio.h>
#include<stdlib.h>

void main(void){

    int count,*arr,*visited,size,i,j;

    printf("Enter size of array:");
    scanf("%d",&size);

    arr=malloc(size*sizeof(int));
    visited=malloc(size*sizeof(int));

    for(i=0;i<size;i++){

        scanf("%d",&arr[i]);
        visited[i]=0;
    }

    for(i=0;i<size;i++){

        count=1;

        if(visited[i]==1){

            continue;
        }

        for(j=i+1;j<size;j++){

            if(arr[i]==arr[j]){
             
                count++;
                visited[j]=1;

            }
        }

        printf("%d occurs %d times\n",arr[i],count);
    }

    free(arr);
    free(visited);
}