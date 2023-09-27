#include<stdio.h>
#include <math.h>
void quadratic(int,int,int);
void main()
{
    int a,b,c;
    printf("enter the a,b,c values\n");
    scanf("%d %d %d",&a,&b,&c);
    quadratic(a,b,c);

}
void quadratic(int a,int b,int c)
{
    int descriminate=(b*b)-(4*a*c);
    float root1=0,root2=0;
    root1=(-b+sqrt(descriminate))/(2*a);
    root2=(-b-sqrt(descriminate))/(2*a);
    if(descriminate>0)
    {
        printf("roots are real and different");
        printf("root1 is :%f",root1);
        printf("root2 is :%f",root2);
    }else if(descriminate<0)
    {
        printf("Roots are complex\n");
    }
    else{
        printf("Roots are real and same\n");
        printf("root1 is :%f",root1);
        printf("root2 is :%f",root2);
    }


}


// #include <stdio.h>
// #include <stdlib.h>
  
// // Prints roots of quadratic
// // equation ax*2 + bx + x
// void findRoots(int a, int b, int c)
// {
//     // If a is 0, then equation is
//     // not quadratic, but linear
//     if (a == 0) {
//         printf("Invalid");
//         return;
//     }
  
//     int d = b * b - 4 * a * c;
//     double sqrt_val = sqrt(abs(d));
  
//     if (d > 0) {
//         printf("Roots are real and different\n");
//         printf("%f\n%f", (double)(-b + sqrt_val) / (2 * a),
//                (double)(-b - sqrt_val) / (2 * a));
//     }
//     else if (d == 0) {
//         printf("Roots are real and same\n");
//         printf("%f", -(double)b / (2 * a));
//     }
//     else // d < 0
//     {
//         printf("Roots are complex\n");
//         printf("%f + i%f\n%f - i%f", -(double)b / (2 * a),
//                sqrt_val / (2 * a), -(double)b / (2 * a),
//                sqrt_val / (2 * a));
//     }
// }
  
// // Driver code
// int main()
// {
//     int a = 50, b = 50, c = 50;
  
//     // Function call
//     findRoots(a, b, c);
//     return 0;
// }