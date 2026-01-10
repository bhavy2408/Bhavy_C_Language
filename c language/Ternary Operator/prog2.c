//Find the greater of two numbers using ternary operator 
#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter Number A=");
    scanf("%d",&a);
    printf("Enter Number B=");
    scanf("%d",&b);

    (a>b)?printf("A is gretest number"):printf("B is gretest number");

    return 0;
}