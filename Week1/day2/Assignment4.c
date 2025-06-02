#include<stdio.h>

void main(void){
 int year,is_leapyear=0;
 printf("Enter the Year:");
 scanf("%d",&year);
 if(year%4==0 && year%100!=0){
    is_leapyear=1;
 }
 if(year%4==0 && year%100==0){
    if(year%400==0){
        is_leapyear=1;
    }
 }
    if(is_leapyear){
        printf("Leapyear");
    }else{
        printf("Is not a Leapyear");
    }
}