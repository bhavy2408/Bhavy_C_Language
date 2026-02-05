//wap to print odd number n to 1 number using while loop:-
#include<stdio.h>
int main()
{
    int a,i;

    printf("Enter any Number=");
    scanf("%d",&a);

    i=a;

    while( i>= 1)
    {
        if(i % 2 != 0)
        {
            printf("%d\n",i);
        }
        i--;
    }
    return 0;
}
