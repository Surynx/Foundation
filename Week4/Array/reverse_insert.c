#include<stdio.h>

void main(void)
{
    int arr[10],i,size,num;

    printf("How many element to insert:");
    scanf("%d",&size);
    
    int k=0;
    for(i=1;i<=size;i++)
    {
        printf("Enter element %d:",i);
        scanf("%d",&num);

        //swift
        for(int j=k;j>=0;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[0]=num;
        k++;
    }

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}