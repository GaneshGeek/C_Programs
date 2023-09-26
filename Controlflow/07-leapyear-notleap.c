#include<stdio.h>
void main()
{
    int year;
    printf("enter the leap year:");
    scanf("%d",&year);
    if(year%4==0)
    {
      if(year%100==0)
      {
        if(year%400==0)
        {
            printf("leap year");
        }
        else{
            printf("not leap year");
        }
      }
      else{
        printf("leap year");
      }
    }
    else{
        printf("not leap year");
    }
}