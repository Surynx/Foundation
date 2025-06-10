#include<stdio.h>

void main(void){
    int array[6],size=5,num;
    printf("Elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    } 
    printf("Enter the element");
    scanf("%d",&num);
    array[size]=num;
    for(int i=0;i<=size;i++){
       if(i==size){
        printf("%d <--New element added !!\n",array[i]);
       }else{
        printf("%d\n",array[i]);
       }
    }
}