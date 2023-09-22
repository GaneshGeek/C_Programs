#include<stdio.h>
void prime(int);
void primerange(int);
int main()
{
    int number;
    printf("enter a number range:");
    scanf("%d",&number);
    //prime(number);
    primerange(number);
}
void prime(int x)
{
    int i,flag=0;
    for(i=2;i<x;i++)
    {
      if(x%i==0)
      {
        flag=1;
      }
    }
    if(flag==0)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}
void primerange(int x)
{
    int i,j,count=0;
    for(i=2;i<=x;i++)
    {
        for(j=2;j<=i;j++)
        {
            //printf(" %d : %d\n",i,j);
            if(i%j==0)
            {
                count=count+1;
            }
        }
        if(count==1)
        {
            printf("%d \n",i);
        }
        count=0;
    }
}