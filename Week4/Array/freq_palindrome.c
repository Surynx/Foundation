#include<stdio.h>
#include<stdbool.h>

void main(void)
{
    int arr[]={1,1,2,2,3,3},size=6,i,j,count,freq[size],n=0,visited[6]={0};
    bool is_palindrome;
    
    //frequency

    for(i=0;i<size;i++)
    {
        if(visited[i]==1) continue;

        count=1;
        for(j=i+1;j<size;j++)
        {
           if(arr[i]==arr[j])
           {
            count++;
            visited[j]=1;
           }
        }

        freq[n++]=count;
    }

    //palindrome freq
    
    is_palindrome=true;
    for(i=0;i<n/2;i++)
    {
        
        if(freq[i] != freq[n-i-1])
        {
            is_palindrome=false;
            break;
        }
       
    }

    if(is_palindrome) printf("Frequency Palindrome..");
    else printf("Not Frequency Palindrome..");
}