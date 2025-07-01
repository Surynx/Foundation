#include<stdio.h>

void main(void)
{
    int arr[]={1, 2, 3, 4, 2, 2, 5, 2},size=8,i,j,temp,count,highest_count=0,num;
    

    //sort
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
    for(i=0;i<size;)
    {
        count=1;
        while (arr[i]==arr[i+1] && i<size-1)
        {
            /* code */
            count++;
            i++;
        }

        if(count>highest_count)
        {
            highest_count=count;
            num=arr[i];
        }

        i++;
        
    }

    printf("Heighest count number is %d appears %d time.",num,highest_count);
    
}