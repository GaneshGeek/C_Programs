#include<stdio.h>
#include<stdlib.h>
void main()
{
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("positive");
    }else if(number<0)
    {
        printf("negative");
    }else{
        printf("zero");
    }
}