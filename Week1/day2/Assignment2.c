#include<stdio.h>

void main(void){
    int mark;
    printf("Enter the mark:");
    scanf("%d",&mark);
    if(0<=mark && mark<=100){

    if(90<=mark && mark<=100){
        printf("A");
    }else if(80<=mark && mark<=89){
        printf("B");
    }else if(60<=mark && mark<=69){
        printf("D");
    }else{
        printf("Failed");
    }
}else{
    printf("Invalid mark");
}
    
}