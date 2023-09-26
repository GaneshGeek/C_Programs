#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,choice;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    while(1)
    {
        printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("%d + %d : %d\n",a,b,a+b);
                   break;
            case 2:printf("%d - %d : %d\n",a,b,a-b);
                   break;
            case 3:printf("%d * %d : %d\n",a,b,a*b);
                   break;
            case 4:printf("%d / %d : %d\n",a,b,a/b);
                   break;
            case 5:exit(0);
            default:printf("you have entered invalid option\n");
                    break;

        }
    }
}