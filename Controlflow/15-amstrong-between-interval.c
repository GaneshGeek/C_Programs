#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void amstrong(int ,int );

int main()
{
    int first,second;
    puts("enter a first interval: ");
    scanf("%d",&first);
    puts("enter a second interval: ");
    scanf("%d",&second);
    amstrong(first,second);
}
void amstrong(int x,int y)
{
    int rem=0,count=0,temp=0,data=0,res=0;
    for(int i=x;i<=y;i++)
    {
        data=i;
        while(data)
        {
            rem=data%10;
            count++;
            data/=10;
        }
        temp=i;
        while(temp)
        {
            rem=temp%10;
            res=res+pow(rem,count);
            temp/=10;
        }
        if(i==res)
        {
            printf("%d\n",i);
        }
        count=0;
        res=0;
        rem=0;
    }
}