// to check whether a number is divisible by 5 and 11. 
#include<stdio.h>
int main()
{
    int a;

    printf("Enter value =\n");
    scanf("%d",&a);

    if(a%5==0 && a%11==0)
    {
        printf("Its divisible by 5 and 11\n ");
    } 
    else
    {
        printf("Its not divisible by 5 and 11\n ");
    }
    return 0;
}