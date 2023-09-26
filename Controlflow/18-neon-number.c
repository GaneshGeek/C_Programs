#include<stdio.h>
void neon(int );
void main()
{
    int num;
    puts("enter a number:");
    scanf("%d",&num);
    neon(num);
}
void neon(int x)
{
    int snum=0,rem=0,res=0;
    snum=x*x;
    while(snum)
    {
        rem=snum%10;
        res=res+rem;
        snum/=10;
    }
    if(res==x)
    {
        printf("%d is neon number",x);
    }
    else
    {
        printf("%d is not neon number",x);
    }
}