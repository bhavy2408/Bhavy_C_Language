//to find the maximum of two numbers. 
#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter your number A=\n");
    scanf("%d",&a);
    printf("Enter your number B=\n");
    scanf("%d",&b);

    if(a>b)
    {
        printf("A is maximum\n");
    }
    else 
    {
        printf("B is maximum\n");
    }

    // to find the minimum of two numbers.

     if(a<b)
    {
        printf("A is minimum\n");
    }
    else 
        {
            printf("B is minimum\n");
        }
    
    return 0;
}