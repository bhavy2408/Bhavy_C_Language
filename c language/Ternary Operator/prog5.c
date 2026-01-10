//Check pass or fail based on marks using ternary operator
#include<stdio.h>
int main()
{
    int a;

    printf("Enter Your marks=");
    scanf("%d",&a);

    (a>100)?printf("Invalid Number"):(a>33)?printf("pass"):printf("Fail !");

    return 0;

}