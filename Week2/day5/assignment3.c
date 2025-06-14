#include<stdio.h>

void main(void){

    int arr1[]={15,1,3,7},arr2[]={2,6,4},merged_array[7],i,j;

     //arr1
    for(i=0;i<4;i++){

        merged_array[i]=arr1[i];
    }

    //arr2
    for(j=0;j<3;j++){
       
        merged_array[j+i]=arr2[j];

    }

    for(i=0;i<7;i++){

        for(j=i+1;j<7;j++){

            if(merged_array[i]>merged_array[j]){

                int temp=merged_array[i];
                merged_array[i]=merged_array[j];
                merged_array[j]=temp;
            }
        }
    }

    for(i=0;i<7;i++){

        printf("{%d}",merged_array[i]);

    }


}