//Create a C program to check if a character entered by the user is a vowel or consonant using a switch statement.
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter your character=");
    scanf("%c",&ch);

    switch(ch)
    { 
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        

        printf("It is vowel:-");
            
    break;
        

    default:
        
        printf("It is consonante:-");

       
    }

    return 0;
}

