// to check whether a number is even or odd using if-else. 
#include<stdio.h>
int main()
{
     int a,age;

    printf("Enter Your number =\n");
    scanf("%d",&a);
   
   if(a%2==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }

    // to check whether a person is eligible to vote.
  

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