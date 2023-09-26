#include<stdio.h>
void fibonacci(int);
void main()
{
    int range;
    printf("enter a range of numbers you want in fibonacci:");
    scanf("%d",&range);
    fibonacci(range);
}
void fibonacci(int x)
{
    int num1=0;
    int num2=1,temp=0;
    if(x==1)
    {
        printf("the fibonacci series : 0");
    }else if(x==2)
    {
       printf("the fibonacci series : 1"); 
    }else{
        printf("0 1 ");
        for(int i=3;i<=x;i++)
        {
          temp=num1+num2;
          num1=num2;
          num2=temp;
          printf("%d ",temp);
        }
    }
}