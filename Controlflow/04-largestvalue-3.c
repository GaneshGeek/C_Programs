#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=0,b=0,c=0;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d is greater number among other number",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is greater number among other number",b);
    }
    else
    {
        printf("%d is greater number among other number",c);
    }
}