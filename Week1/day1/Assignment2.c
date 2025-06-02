#include<stdio.h>
#include<stdlib.h>

int Sum(int a,int b){
        int result=a+b;
        return result;
    }
int main(void){
    int num1,num2,result;
    printf("Enter Two numbers:");
    scanf("%d%d",&num1,&num2);
    result=Sum(num1,num2);
    printf("result:%d",result);
   
    return EXIT_SUCCESS;

}

