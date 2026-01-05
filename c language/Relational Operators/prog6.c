//to find the largest of three numbers using relational operators.
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter value A=\n");
    scanf("%d",&a);

    printf("Enter value B=\n");
    scanf("%d",&b);

    printf("Enter value C=\n");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("A is largest\n");
    }
    else if(b>c && b>a)
    {
        printf("B is largest");
    }
    else
    {
        printf("C is largest\n");
    }
    return 0;
}