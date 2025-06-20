#include<stdio.h>

void main(void)
{
int arr[6],i,temp;
int size=sizeof(arr)/sizeof(int);

printf("Elements:");
for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}

for(i=0;i<size/2;i++)
{
    temp=arr[i];
    arr[i]=arr[size-i-1];
    arr[size-i-1]=temp;
}

for(i=0;i<size;)
{
    if(arr[i]%4 == 0)
    {   
        //deletion
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

for(i=0;i<size;i++)
{
    printf("{%d}",arr[i]);
}

}