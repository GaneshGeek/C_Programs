#include<stdio.h>
void reverse(int);
int main()
{
  int num;
  printf("enter a number:");
  scanf("%d",&num);
  reverse(num);
}
void reverse(int x)
{
    int data=x;
    int rem=0,rev=0;
    while(data)
    {
        rem=data%10;
        rev=rev*10+rem;
        data/=10;
    }
    printf("reverse of %d is : %d",x,rev);
}