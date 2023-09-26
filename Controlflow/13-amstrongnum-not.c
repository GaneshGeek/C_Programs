#include<stdio.h>
#include<math.h>
int amstrong(int);
void main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    if(amstrong(num))
    {
        printf("%d is a amstrongnumber",num);
    }else{
        printf("%d is not a amstrong number",num);
    }
}
int amstrong(int x)
{
    int data=x,rem=0,res=0,count=0;
    count=0;
    while(data)
    {
        data/=10;
        count+=1;
    }
    int temp=x;
    while(temp)
    {
        rem=temp%10;
        res=res+pow(rem,count);
        temp/=10;
    }
    if(x==res)
    {
        return 1;
    }
    return 0;
}