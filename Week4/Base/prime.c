#include<stdio.h>
#include<stdbool.h>

void main(void)
{
    int num,i;
    bool is_prime;

    printf("Enter the number");
    scanf("%d",&num);

    is_prime=true;
    if(num<2)
        {
            is_prime=false;
        }else{
    for(i=2;i<num;i++)
    {
        if(num%i == 0)
        {
            is_prime=false;
            break;
        }

    }
}

    if(is_prime) printf("Prime number...");
    
    else printf("not prime...");
    
}