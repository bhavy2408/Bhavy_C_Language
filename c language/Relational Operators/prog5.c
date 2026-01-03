// to check whether a person is eligible to vote. 
#include<stdio.h>
int main()
{
    int age;

    printf("Enter age of person=\n");
    scanf("%d",age);

    if(age >= 18)
    {
        printf("Eligible for vote\n");
    }
    else
    {
        printf("Not Eligible for vote !\n");
    }
    return 0;
}
