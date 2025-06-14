#include<stdio.h>
#include<stdbool.h>

void main(void){

    int arr1[5],arr2[5],i,merge[10];
    bool is_diplicate;
    
    printf("Elements of arr1:");
    for(i=0;i<5;i++){
       scanf("%d",&arr1[i]);
    }

    printf("Elements of arr2:");
    for(i=0;i<5;i++){
       scanf("%d",&arr2[i]);
    }
    i=0;
    int k=0,j=0;
    while(i<5){
      merge[k]=arr1[i];
      i++;
      k++;

    }
    while(j<5){
        merge[k]=arr2[j];
        j++;
        k++;
    }
    int size=10;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(merge[i]==merge[j]){
                for(int x=j;x<size;x++){
                    merge[x]=merge[x+1];
                }
                size--;
            }
        }
    }
for(i=0;i<size;i++){
       printf("{%d}",merge[i]);
    }
    

    
}