// to check whether a number is positive, negative, or zero. 
#include<stdio.h>
int main()
{
    int a;

    printf("Enter Your number =\n");
    scanf("%d",&a);
   
    if(a>0)
    {
        printf("Number is positive\n");
    }
    else if(a<0)
    {
        printf("Number is negative\n");
    }
    else if(a==0)
    {
        printf("Number is zero\n");
    }else
    {
        printf("invalid !\n");
    }
   
    // to check whether a given number is even or odd. 
    if(a%2==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
   
    return 0;
}