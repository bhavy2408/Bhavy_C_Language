//Alphabet Skipper
#include<stdio.h>
int main()
{
    char ch='a';

    do{
        printf("%c\n",ch);
        ch=ch+4;
    }while(ch <='z');

    return 0;
}