#include<stdio.h>


void main(void){
     int arr[100],i,j,size,visited[100]={0};
     

    printf("Enter size of array:");
    scanf("%d",&size);

      for(i=0;i<size;i++){

        scanf("%d",&arr[i]);
        
    }

    for(i=0;i<size;i++){

        if(visited[i]==2){

            continue;
        }

        for(j=i+1;j<size;j++){

            if(arr[i]==arr[j]){

                visited[i]=1;
                visited[j]=2;
            }
        }
    }

    for(i=0;i<size;i++){

        if(visited[i]==1 || visited[i]==0){

            printf("{%d}",arr[i]);
        }
    }

    
     
}