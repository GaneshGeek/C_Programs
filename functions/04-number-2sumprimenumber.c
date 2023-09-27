#include<stdio.h>
int isprime(int);
void main()
{
    int number;
    printf("enter number:");
    scanf("%d",&number);
    for(int i=2;i<=number/2;i++)
    {
        if(isprime(i))
        {
            int num1=i;
            int num2=number-i;
            if(number==num1+num2)
            {
                if(isprime(num2))
                {
                    printf("%d + %d =%d \n",num1,num2,number);
                }

            }
        }
    }

}
int isprime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
