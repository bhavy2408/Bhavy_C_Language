//find sum of first and last digit number
#include<stdio.h>
int main()
{
    int a,first,last,sum=0;

    printf("Enter any Number=");
    scanf("%d",&a);


    last= a%10;


    while(a >= 10)
    {
        a=a/10;
    }
    first=a;

    sum=first+last;

    printf("Sum of first and last digit number=%d",sum);

    return 0;
}
