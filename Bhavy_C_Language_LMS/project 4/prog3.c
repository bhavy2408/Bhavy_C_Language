//Develop a program that prints the given left half triangle pattern using a nested for loop:-
//_ _ _ _ 5
//_ _ _ 4 5
//_ _ 3 4 5
//_ 2 3 4 5
//1 2 3 4 5 
#include<stdio.h>
int main()
{
    int i , j , k;

    for(i=1 ; i < 5 ; i--)
    {   
        for(j=1; j<=i ; j++)
            {
                printf("_",i);  // for space
            }
    printf("\n");
    }
   
    return 0;
}