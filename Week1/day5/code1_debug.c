#include<stdio.h>


int main() {
  int n, sum = 0, i;
 printf("Enter a number: ");
 scanf("%d",&n); // Fix required here
 for (i = 1; i <= n; i++){
 sum += i; // Fix required here
 }
printf("Sum is %d", sum); // Fix required here
 return 0;
}
