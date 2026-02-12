//Develop a program that prints the given Right half triangle pattern using a nested for loop:-
//41
//41 42
//41 42 43
//41 42 43 44
//41 42 43 44 45

#include<stdio.h>
int main()
{
    int i, j;

    for(i=1 ; i<=5 ; i++)  //row 
    {
        for(j=41 ; j<41 + i; j++)  //column
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
