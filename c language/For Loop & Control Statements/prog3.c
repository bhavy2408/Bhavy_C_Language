//Print prime numbers between 1 and N
#include<stdio.h>
int main()
{
    int a,i,num!=1;

    printf("Enter your number=");
    scanf("%d",&a);

    for(i=1;i<=a;++i)
    {
        num=a%1;
        printf("Prime Number=%d\n",num);
    }
}