// to find the largest of three numbers using nested if
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter your number A=\n");
    scanf("%d",&a);
    printf("Enter your number B=\n");
    scanf("%d",&b);
    printf("Enter your number C=\n");
    scanf("%d",&c);

    if(a>b)
        if(a>c)
        {
            printf("A is largest number\n");           
        }
        else
        {
            printf("C is largest\n");
        }
    else if(b>c)
        {
            printf("B is largest\n");
        }  
        else
        {
            printf("C is largest\n");
        }
    return 0;
    
}