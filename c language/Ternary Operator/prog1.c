// Check whether a number is Even or Odd using the ternary operator 
#include<stdio.h>
int main()
{
    int a;
    printf("Enter Your Value=");
    scanf("%d",&a);

    (a%2==0)?printf("Even Number"):printf("Odd Number");

    return 0;
}