#include<stdio.h>

void main(void){

    int arr1[]={1,2,3},arr2[]={4,5,6},merged_array[6],i;

    for(i=0;i<3;i++){

        merged_array[i]=arr1[i];
        merged_array[i+3]=arr2[i];
    }

    for(i=0;i<6;i++){

        printf("{%d}",merged_array[i]);
    }
}