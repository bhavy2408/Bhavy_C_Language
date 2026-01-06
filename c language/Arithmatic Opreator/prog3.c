
#include<stdio.h>
int main()
{
    int a=10,b=10,c=10;
    int d=3,e=5;
    //to calculate the average of three numbers.
    printf("Average=%d\n\n",(a+b+c)/3);

    //swap two numbers using arithmetic operators
    d=d+e; 
    e=d-e;
    d=d-e;

    printf("Before swapping\n");
    printf("d=3\n");
    printf("e=5\n");

    printf("after Swaping\n");
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    
    return 0;
}