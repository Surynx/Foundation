#include<stdio.h>

void main(void){
    float num1,num2,num3;
    printf("Enter the three numbers:");
    scanf("%f%f%f",&num1,&num2,&num3);
    float average;
    
    average=(num1+num2+num3)/3;
    printf("Average:%f",average);

}