#include<stdio.h>
void main()
{
    int num,range;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("enter a range: ");
    scanf("%d",&range);
    for(int i=1;i<=range;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
}