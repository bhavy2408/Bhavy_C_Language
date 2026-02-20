//Find length of string using pointer
#include<stdio.h>
int main()
{
    char str[20];
    char *p=str;

    printf("Enter any string=\n");
    scanf("%s",&*p);

    int len = strlen(p);

    printf("String of length=%d",len);
    return 0;
}