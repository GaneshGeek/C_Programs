#include<stdio.h>
#include<math.h>
void main()
{
    double ci,a,t,r,p_a;
   printf("enter the amount :  \n");
   scanf("%lf",&a);
   printf("enter the time due to be amount paid :  \n");
   scanf("%lf",&t); 
   printf("enter the rate of interest :  \n");
   scanf("%lf",&r);

   p_a=a*(pow(1+(r/100),t));
   printf("the principle amount is: %lf\n",p_a);
   ci=p_a-a;
   printf("the compound interest is : %lf",ci);


}