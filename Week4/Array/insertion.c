#include<stdio.h>

void main(void)
{
    int arr[6]={1,2,3,4,5},i,pos,size=5;

    printf("Enter pos to insert");
    scanf("%d",&pos);

    pos--;
    if(pos<size && pos>=0)
    {
        for(i=size-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }

        arr[pos]=10;
        
        for(i=0;i<size+1;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else
    {
        printf("Enter a valid pos..");
    }


}