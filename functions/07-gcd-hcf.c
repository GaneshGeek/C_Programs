#include<stdio.h>
void gcd(int,int);
int recursivegcd(int,int);
int main()
{
    int num1,num2,result;
    printf("enter two values:");
    scanf("%d %d",&num1,&num2);
    gcd(num1,num2);
    result=recursivegcd(num1,num2);
    printf("\nthe gcd of %d,%d is %d",num1,num2,result);
}
void gcd(int x,int y)
{
    int count=1,gcd=0;
    while(count<=x && count<=y)//the count value is less than or equal to the minimum number between x and y.
    {
        if(x%count==0 && y%count==0)//the two values must divisible by count and give ramainder is 0
        {
            gcd=count;// the count is stored in gcd variabe.
        }
        count++;//the count value increamments upto the minimum number ,between to values
    }
    printf("the gcd of %d,%d is %d",x,y,gcd);
}
int recursivegcd(int a,int b)//euclidean algorithm.
{
    if(a==0)
      return b;
    if(b==0)
      return a;
    if(a==b)
      return a;
    if(a>b) 
      return recursivegcd(a-b,b);
    
    return recursivegcd(a,b-a);
}