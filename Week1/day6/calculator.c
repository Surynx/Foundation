#include<stdio.h>

void main(void){
  int num1,num2,operator;
  int cont;
  int result,flag=1;

  printf("BASIC CALCULATOR!\n");
  do{
  printf("Enter the two numbers:");
  scanf("%d%d",&num1,&num2);
  printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Divition");
  printf("\nSelect a option:");
  scanf("%d",&operator);
 
  
  
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
  printf("\nDo you want to continue(1/2):");
  scanf("%d",&cont);
}while(cont==1);
printf("Thank you");

}