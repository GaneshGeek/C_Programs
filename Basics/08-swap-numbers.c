#include<stdio.h>
void swap(int ,int);
int main()
{
    int a,b;
    printf("enter a and b is: ");
    scanf("%d %d",&a,&b);
    swap(a,b);
}
void swap(int a,int b)
 {
    int temp=0;
    // temp=a;
    // a=b;
    // b=temp;

    // a^=b^=a;

    // a=a+b;
    // b=a-b;
    // a=a-b;

    a=a*b;
    b=a/b;
    a=a/b;
    
    printf("after swapping a and b : ");
    printf("a is %d, b is %d",a,b);
}