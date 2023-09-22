#include<stdio.h>
#include<stdlib.h>
void perimeter_rec(int,int);
void area_rec(int,int);
void main()
{
    int choice;
    int length,width;
    printf("enter length: \n");
    scanf("%d",&length);
    printf("enter width: \n");
    scanf("%d",&width);
    rerun:printf("\nmenu\n1.perimeter of rectangle\n2.area of rectangle\n3.exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:perimeter_rec(length,width);
              goto rerun;
       case 2:area_rec(length,width);
              goto rerun;
       case 3:exit(0);

      default:printf("invalid choice\n");
              goto rerun;
    }
}
void perimeter_rec(int x,int y)
{
   int perimeter;
   perimeter=2*(x+y);
   printf("perimeter is : %d\n",perimeter);
}
void area_rec(int x,int y)
{
    int area;
    area=x*y;
    printf("area is :%d\n",area);
}