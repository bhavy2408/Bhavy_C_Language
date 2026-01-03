// to check whether a number is greater than, less than, or equal to another number. 
#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter number A=\n");
    scanf("%d",&a);
    printf("Enter number B=\n");
    scanf("%d",&b);

    if(a>b)
    {
        printf("A is greater than B\n");
        printf("B is less than A\n");
    }
    else if(b>a)
    {
        printf("B is greater than A\n");
        printf("A is less than B\n");
    }
    else if(a==b)
    {
        printf("Both number has equal\n");
    }else
    {
        printf("invalid !\n");
    }
s
    //to check whether two numbers are equal or not. 

    if(a==b)
    {
        printf("Both number are equal\n");
    }else
    {
        printf("Both number are not equal \n");
    }
    return 0;
}
