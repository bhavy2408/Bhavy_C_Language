//to check whether a number is positive or negative using if.
#include<stdio.h>
int main()
{
    int a;

    printf("Enter Your number =\n");
    scanf("%d",&a);
   
    if(a>0)
    {
        printf("Number is positive\n");
    }
    else if(a<0)
    {
        printf("Number is negative\n");
    }
    else if(a==0)
    {
        printf("Number is zero\n");
    }
    else{
        printf("Invalid number\n");
    }

    // to check whether a number is divisible by 5 and 11. 
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