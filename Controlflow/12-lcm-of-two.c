#include<stdio.h>
void main()
{
    int num1,num2;
    printf("enter a first number:");
    scanf("%d",&num1);
    printf("enter a second number:");
    scanf("%d",&num2);
    int max=0;
    max=(num1>num2)?num1:num2;
    while(1)
    {
        if(max%num1==0 && max%num2==0)
        {
            printf("the lcm of %d and %d is :%d\n",num1,num2,max);
            break;
        }
        max++;
    }
}