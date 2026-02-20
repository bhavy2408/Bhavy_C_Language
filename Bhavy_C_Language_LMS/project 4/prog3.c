//Develop a program that prints the given left half triangle pattern using a nested for loop:-
//_ _ _ _ 5
//_ _ _ 4 5
//_ _ 3 4 5
//_ 2 3 4 5
//1 2 3 4 5 
#include<stdio.h>
int main()
{
    int i , j ;

    for(i=1 ; i <= 5 ; i++)
    {   
        for(j=1; j<=5 - i  ; j++)
            {
                printf("_ ",i); 
            }

        for(int j=6-i ; j<=5 ; j++)
        {
            printf("%d ",j);
        }
    printf("\n");
    } 

    
    return 0;
}
