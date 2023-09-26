#include<stdio.h>
void factors(int );
void main()
{
    int num;
    puts("enter a number:");
    scanf("%d",&num);
    factors(num);
}
void factors(int x)
{
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("%d ",i);
        }
    }
}