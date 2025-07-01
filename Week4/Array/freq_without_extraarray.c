#include<stdio.h>

void main(void)
{
    int arr[] = {3, 2, 3, 2, 4, 5, 3},size=7,i,j;
    int count;

    for(i=0;i<size;i++)
    {
        count=1;
        

        //frequency
        for(j=i+1;j<size;)
        {
            if(arr[i]==arr[j])
            {
                
                count++;

                 //delete
            for(int x=j;x<size;x++)
            {
                arr[x]=arr[x+1];
            }
            size--;
            }
            else
            {
                j++;
            }
            
           
        }


        printf("%d appears %d times\n",arr[i],count);


    }
}





