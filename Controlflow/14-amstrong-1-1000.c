#include<stdio.h>
#include<math.h>
void amstrong(int,int);
void main()
{
    amstrong(1,1000);
}
void amstrong(int x,int y)
{
    int rem=0,res=0,count=0;
    for(int i=x;i<=y;i++)
    {
     
        int data=i;
        while(data)
        {
            data/=10;
            count+=1;
        }
        

        int temp=i;
        while(temp)
        {
            rem=temp%10;
            res=res+pow(rem,count);
            temp/=10;
        }
        if(i==res)
        {
            printf("%d\n",i);
        }
        count=0;
        rem=0;
        res=0;
    }
}