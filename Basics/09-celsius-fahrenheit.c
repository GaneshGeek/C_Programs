#include<stdio.h>
void ctf(float );
void ftc(float );
int main()
{
    float temperature;
    int choice;
    printf("enter the temperature : ");
    scanf("%f",&temperature);
    printf("choose below option to perform operation:\n1.celsius-to-fahrenheit\n2.fahrenheit-to-celsius\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:ctf(temperature);
           break;
    case 2:ftc(temperature);
           break;    
    default:printf("you chosen invalid option");
            break;
    }

}
void ctf(float temperature)
{
    float result;
    result=(temperature*(9/5))+32;
    printf("celsius is %f, fahrenhet is %f",temperature,result);
}
void ftc(float temperature)
{
    float result;
    result=(temperature-32)*(5/9);
    printf("fahrenheit is %f, celsius is %f",temperature,result);
}