#include<stdio.h>

int check(int number){
    if(number%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
}
void main(void){
    check(3);
    printf("\n");
    check(4);
}