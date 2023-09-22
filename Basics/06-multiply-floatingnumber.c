#include<stdio.h>
void product(float,float);
int main()
{
    float num1,num2;
    printf("enter number a and b: ");
    scanf("%f",&num1);
    scanf("%f",&num2);
    product(num1,num2);
}
void product(float x,float y)
{
    float multiply=x*y;
    printf("%.3f",multiply);
}