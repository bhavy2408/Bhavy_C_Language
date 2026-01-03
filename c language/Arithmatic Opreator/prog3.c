
#include<stdio.h>
int main()
{
    int a=10,b=10,c=10;
    int d=3,e=5;
    //to calculate the average of three numbers.
    printf("Average=%d\n\n",(a+b+c)/3);

    //swap two numbers using arithmetic operators
    d=d+e; //d=8
    e=d-e; //e=5
    d=d-e; //d=3
    
    printf("after Swaping\n");
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    
    return 0;
}