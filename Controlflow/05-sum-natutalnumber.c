#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num;
    int result;
    printf("enter a number :");
    scanf("%d",&num);
    result=(num*(num+1))/2;
    printf("the sum of natural number upto %d is %d",num,result);

}