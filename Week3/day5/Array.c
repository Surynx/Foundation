#include<stdio.h>

void main(void)
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]),i,j=0,k=0;
    int even[size/2],odd[size/2];
    
    for(i=0;i<size;i++)
    {
        if(arr[i]%2 == 0)
        {
            even[j++]=arr[i];
        }
        else
        {
            odd[k++]=arr[i];
        }
    }

    //even
    printf("Even array:");
    for(i=0;i<size/2;i++)
    {
        printf("{%d}",even[i]);
    }
    
    //odd
    printf("\nOdd array:");
    for(i=0;i<size/2;i++)
    {
        printf("{%d}",odd[i]);
    }

}