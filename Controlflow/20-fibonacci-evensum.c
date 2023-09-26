#include<stdio.h>
void fibonacci(int n);
void main()
{
    int range;
    puts("enter range : ");
    scanf("%d",&range);
    fibonacci(range);
}
void fibonacci(int n)
{
    int temp,n1,n2,dummy=0,sum=0;
    temp= (n*2);
    //printf("temp is : %d\n",temp);
    if(temp==0)
    {
        printf("0 ");
    }
    else if(temp==1)
    {
        printf("0 1 ");
    }
    else
    {
        n1=0;
        n2=1;
        printf("0 1 "); // these two values excluded in the sumation process.
        for(int i=2;i<=temp;i++)
        {
            dummy=n1+n2;
            printf("%d ",dummy);
            if(i%2==0)
            {
                sum=sum+dummy;
            }
            n1=n2;
            n2=dummy;
        }
        printf("\nthe sum of even index in fibonacci series : %d ",sum);
    }
}