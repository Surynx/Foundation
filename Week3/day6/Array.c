#include<stdio.h>

void main(void)
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]),i;

    for(i=0;i<size;)
    {
        if(arr[i]%3 == 0)
        {
            //delete
            for(int j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
        }
        else
        {
            i++;
        }
    }
    
    printf("Updated array: ");
    for(i=0;i<size;i++)
    {
        printf("[%d]",arr[i]);
    }
}