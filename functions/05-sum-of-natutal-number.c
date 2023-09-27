#include<stdio.h>
void rangeofsum(int);
int recursiverangeofsum(int);
int main()
{
    int range,result;
    printf("enter a range to sum: ");
    scanf("%d",&range);
    rangeofsum(range);
    result=recursiverangeofsum(range);
    printf("\nthe sum of first %d numbers is :%d",range,result);
}
void rangeofsum(int x)
{
    int sum=0;
    for(int i=1;i<=x;i++)
    {
      sum=sum+i;
    }
    printf("the sum of first %d numbers is :%d",x,sum);
}
int recursiverangeofsum(int x)
{
  if(x==0)
    return 0;
  return x+recursiverangeofsum(x-1);
}