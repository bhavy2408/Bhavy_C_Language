// to find whether a number is even or odd using operators.
#include<stdio.h>
int main()
{
    int a;

    printf("Enter value =");
    scanf("%d",&a);

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