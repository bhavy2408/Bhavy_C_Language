//wap to print 1 to n number using while loop:-
#include<stdio.h>
int main()
{
    int a;
    int i=1;

    printf("Enter any Number=");
    scanf("%d",&a);

    while(i<=a)
    {
        printf("%d\n",i);
        i++;
        
    }
    return 0;
}