#include<stdio.h>

void main(void){

    int arr1[5]={1,2,3,4},arr2[3]={3,8,10};
    int size1=4,size2=3,merged[size1+size2];
    int i=0,j=0,k=0;

    while(i<size1 && j<size2){

        if(arr1[i]<arr2[j]){

            merged[k]=arr1[i];
            i++;
            k++;
        }else{

            merged[k]=arr2[j];
            j++;
            k++;
            
        }
    }

    while(i<size1){

        merged[k]=arr1[i];
        i++;
        k++;
    }
   
    while(j<size2){

        merged[k]=arr2[j];
        j++;
        k++;
    }

    for(i=0;i<size1+size2;i++){

        printf("{%d}",merged[i]);
    }

    
}