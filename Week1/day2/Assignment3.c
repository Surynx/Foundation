#include<stdio.h>

void main(void){
  int num1,num2,operator;
  printf("Enter the two numbers:");
  scanf("%d%d",&num1,&num2);
  printf("1.add\n2.sub\n3.mul\n4.div");
  scanf("%d",&operator);
  int result,flag=1;
  switch(operator){
    case 1:
    result=num1+num2;
    break;
    case 2:
    result=num1-num2;
    break;
    case 3:
    result=num1*num2;
    break;
    case 4:
    if(num2!=0){
    result=num1/num2;
    }else{
        printf("Error");
    }
    flag=0;
    break;
    default:
    printf("Invalid");
    flag=0;
  }
  if(flag){
  printf("Result:%d",result);
  }
}