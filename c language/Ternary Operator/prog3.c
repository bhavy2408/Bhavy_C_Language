//Check whether a number is Positive, Negative, or Zero
#include<stdio.h>
int main()
{
    int a;

    printf("Enter your number=");
    scanf("%d",&a);

    (a>0)?printf("Positive Number\n"):(a<0)?printf("Negative number\n"):printf("Number is Zero");

    return 0;
}