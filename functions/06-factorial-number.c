#include<stdio.h>
int recursivefactorial(int);
int main()
{
    int number,result;
    printf("enter a number:");
    scanf("%d",&number);
    result=recursivefactorial(number);
    printf("the factorial of %d = %d",number,result);
}
int recursuvefactorial(int numb)
{
  if(numb==0)
    return 1;
  return numb * recursivefactorial(numb-1);
}