#include<stdio.h>
int palindrome(int);
void main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(palindrome(num))
    {
        printf("%d is a plindrome number",num);
    }else{
        printf("%d is not a palindrome ",num);
        
    }
}
int palindrome(int x)
{
    int data=x;
    int rem=0,rev=0;
    while(data)
    {
        rem=data%10;
        rev=rev*10+rem;
        data/=10;
    }
    if(rev==x)
    {
        return 1;
    }
    return 0;
}