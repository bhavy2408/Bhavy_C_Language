//Print factorial of a number using for loop
#include<stdio.h>
int main()
{
    int num,i,fact=1;

    printf("Enter number =");
    scanf("%d",&num);

    for(i=1;i<=num;++i)
    {
        fact*=i;
        printf("factorial %d=%d\n",num,fact);
    }

    return 0;
}