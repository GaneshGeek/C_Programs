#include<stdio.h>
void prime(int);
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    prime(num);
}
void prime(int x)
{
    int i,count=0;
    if (x==1 || x==0)
    {
        printf("you have entered 1 or 0 ,these are not comes to under prime number");
    }
    else{
        for(i=2;i<=x;i++)
        {
          if(x%i==0)
          {
            count+=1;
          }
        }
    }
    if(count==1)
    {
        printf("%d is Prime",x);
    }
    else{
        printf("%d is not prime",x);
    }
}