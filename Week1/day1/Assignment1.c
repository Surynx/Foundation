#include<stdio.h>

void main(void){
    char name[100];
    printf("Enter your name:");
    //scanf("%s",name);
    gets(name);
    printf("Hello,World!");
    printf("\nYour name is:%s",name);
}