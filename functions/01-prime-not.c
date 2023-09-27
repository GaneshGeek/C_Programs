#include<stdio.h>
int isprime(int);
void main()
{
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    if(isprime(number)==1)
    {
        printf("prime number");
    }
    else{
        printf("not prime number");
    }
}
int isprime(int x)
{
    int flag=0;
    if(x==0 || x==1)
    {
        printf("0,1 are exceptional to prime number");
    }
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        return 1;
    }
    return 0;
}