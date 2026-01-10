//Find the smallest of two numbers using ternary operator.
#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter Number A=");
    scanf("%d",&a);
    printf("Enter Number B=");
    scanf("%d",&b);

    (a<b)?printf("A is smallest Number"):printf("B is smallest Number");

    return 0;
}