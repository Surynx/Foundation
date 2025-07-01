#include<stdio.h>

void main(void)
{
    int arr[]= {0, 1, 9, 8, 4, 0, 2, 7, 0},size=9;
    int i,j;

    int real_size=size;
    for(i=0;i<size;)
    {
        if(arr[i]==0)
        {
            int temp=arr[i];
            //swift
            for(j=i+1;j<size;j++)
            {
                arr[j-1]=arr[j];
            }

            arr[size-1]=temp;
            size--;
        }
        else
        {
            i++;
        }

    }

    //print
    for(i=0;i<real_size;i++)
    {
        printf("%d ",arr[i]);
    }

}