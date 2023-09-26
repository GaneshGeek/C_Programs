#include<stdio.h>
#include<stdlib.h>
void evenodd(int);
void main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    evenodd(num);
}
void evenodd(int x)
{
    if(x%2==1)
    {
        printf("%d is odd number",x);
    }
    else{
        printf("%d is even number",x);
    }
}