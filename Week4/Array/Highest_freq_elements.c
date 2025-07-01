#include<stdio.h>

void main(void)
{
    int arr[]={3,3,3,4,4,4,5,5,5,5,6,6,6,6},count,temp,i,j,highest_count=0,size=14;
    int num[5],k=0;
    
    //selection sort

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    //frequency
    for(i=0;i<size;i++)
    {
        count=1;
        while(i<size-1 && arr[i]==arr[i+1]){
            count++;
            i++;
        }

        if(highest_count<count)
        {
            highest_count=count;
            k=0; //reset
            num[k++]=arr[i];
        }
        else if(highest_count==count)
        {
            num[k++]=arr[i];
        }
    }

    printf("Numbers with high frequence are:");
    for(i=0;i<k;i++)
    {
        printf(" %d ",num[i]);
    }

    printf("\nTheir frequency : %d",highest_count);
}