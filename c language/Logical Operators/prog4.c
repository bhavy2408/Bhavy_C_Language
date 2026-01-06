// to check whether a year is a leap year. 
#include<stdio.h>
int main()
{
    int year;

    printf("Enter year=\n");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("It's leap year\n");
    }
    else{
        printf("It's not leap year\n");
    }
    return 0;
}