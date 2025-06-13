#include<stdio.h>
#include<stdlib.h>

void main(void){

    int *arr,size,i,j,count,visited[100]={0};

    printf("Size:");
    scanf("%d",&size);

    arr=malloc(size*sizeof(int));

    for(i=0;i<size;i++){

        scanf("%d",&arr[i]);
        
    }

    for(i=0;i<size;i++){
        count=1;

        if(visited[i] == 1){

            continue;
        }

        for(j=i+1;j<size;j++){
            

            if(arr[i]==arr[j]){

                count++;
                visited[j]=1;
            }
        }
          if(arr[i]%2 != 0){
             
            printf("%d-->%d\n",arr[i],count);

          }

    }

   

    free(arr);
}