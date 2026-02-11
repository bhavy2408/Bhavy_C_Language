//size of operator
#include<stdio.h>
int main()
{
    int a = 10;
    char b = 'a';
    float c = 12.10;
    double d = 1234.5;
    int num;
    int *ptr;
    ptr = &num;
    printf("value of int = %d byte \n",sizeof(a));
    printf("value of char = %d byte \n",sizeof(b));
    printf("value of float = %d byte \n",sizeof(c));
    printf("value of double = %d byte \n",sizeof(d));
    printf("value of pointer = %d byte \n",sizeof(*ptr));
    return 0;
}