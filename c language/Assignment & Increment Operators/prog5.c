//to find the maximum of two numbers using the conditional (ternary) operator. 
#include<stdio.h>
int main()
{
    int a,b,max;

    printf("Enter value of A=");
    scanf("%d",&a);
    printf("Enter value of B=");
    scanf("%d",&b);

    max=(a>b)?a:b;

    printf("Max value =%d\n",max);

    return 0;
} 