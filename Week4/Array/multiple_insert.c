#include<stdio.h>

void main(void)
{
    int arr[10]={1,2,3,4,5},i,size=5;
    int num,pos;
    char c;

    do
    {
        printf("Enter the number:");
        scanf("%d",&num);

        printf("Enter the pos:");
        scanf("%d",&pos);

        pos--;
        if(pos<size && pos>=0)
        {
            //swift

            for(i=size-1;i>=pos;i--)
            {
                arr[i+1]=arr[i];
            }
            size++;
            arr[pos]=num;

            printf("Continue inserting(Y/N):");
            scanf(" %c",&c);
        }
    } while (c=='y');
    

    printf("Exit...\n");

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

}