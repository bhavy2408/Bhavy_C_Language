// to find the maximum of two numbers using relational operators.
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
    else if(b>a)
        {
            printf("B is maximum\n");
        }
    else
        {
            printf("invalid !\n");
        }

    

    // to find the minimum of two numbers using relational operators.

    if(a<b)
    {
        printf("A is minimum\n");
    }
    else if(b<a)
        {
            printf("B is minimum\n");
        }
    else
        {
            printf("invalid !\n");
        }

    return 0;
}