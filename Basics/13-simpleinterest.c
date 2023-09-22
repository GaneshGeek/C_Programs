#include<stdio.h>
void main()
{
   float si,p,t,r;
   printf("enter the principle amount :  \n");
   scanf("%f",&p);
   printf("enter the time due to be amount paid :  \n");
   scanf("%f",&t); 
   printf("enter the rate of interest :  \n");
   scanf("%f",&r);  

   si=(p*t*r)/100;

   printf("the simple interest is:%f\n",si);
}