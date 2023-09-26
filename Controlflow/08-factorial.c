#include<stdio.h>
#include<stdlib.h>
void factorial(int);
void main()
{
    int num;
    printf("enter a number to find factorial:");
    scanf("%d",&num);
    factorial(num);
}
void factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    printf("the factorial of %d is : %d",x,fact);
}