#include<stdio.h>

void main(void)
{
    int arr1[20]={1,2,3,4,5},arr2[3]={10,20,30};
    int pos,size1=5,size2=3,i,j;
    
    printf("Insertion Index:");
    scanf("%d",&pos);

    //pos-=1;
    if(pos<size1 && pos>=0)
    {
        int temp=pos;
        j=0;
        while(j<size2)
        {
           for(i=size1-1;i>=pos;i--)
        {
            arr1[i+1]=arr1[i];
        }
        j++;
        size1++;
        pos++;
        }

        for(i=0;i<size2;i++)
        {
            arr1[temp+i]=arr2[i];
        }
    }
    else
    {
        printf("Enter a valid position..");
    }

    //print arr1
    for(i=0;i<size1;i++)
    {
        printf("%d ",arr1[i]);
    }
}