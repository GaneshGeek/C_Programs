#include<stdio.h>
#include<stdlib.h>

struct complex
{
    int real;
    int img;
};


int main()
{
    struct complex a,b,sum;
    printf("enter real and imaginary value of first number: ");
    scanf("%d %d",&a.real,&a.img);
    printf("enter real and imaginary value of second number: ");
    scanf("%d %d",&b.real,&b.img);
    sum.real=a.real+b.real;
    sum.img=a.img+b.img;

    printf("sum of two complex numbers: %d+i%d",sum.real,sum.img);


}