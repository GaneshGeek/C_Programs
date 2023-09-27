#include<stdio.h>
void primenumbers(int,int);
void main()
{
    int min,max;
    printf("enter the minimum range of number:");
    scanf("%d",&min);
    printf("enter a maximu range of number: ");
    scanf("%d",&max);
    primenumbers(min,max);
}
void primenumbers(int x,int y)
{
int flag=0;
for(int i=x;i<=y;i++)
{
    if(i==1)
    {
        continue;
    }
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d ",i);
    }
    flag=0;
}
}