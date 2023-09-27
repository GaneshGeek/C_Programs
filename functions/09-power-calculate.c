#include<stdio.h>
int mypow(int,int);
int main()
{
    int number,raise,result;
    printf("enter number:\n");
    scanf("%d",&number);
    printf("enter number to raise a number:\n");
    scanf("%d",&raise);
    result=mypow(number,raise);
    printf("%d power %d :%d",number,raise,result);
}
int mypow(int x,int y)
{
    if(y==0)
     return 1;
    return x * mypow(x,y-1);
}