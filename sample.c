#include<stdio.h>

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void main(void){
    int x=10;
    int y=20;
    swap(&x,&y);
    printf("%d\n%d",x,y);

}