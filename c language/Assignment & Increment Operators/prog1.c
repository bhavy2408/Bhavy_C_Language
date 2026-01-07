// to demonstrate assignment operators (+=, -=, *=, /=)
#include<stdio.h>
int main()
{
    int a,b;
     
    printf("Enter Value of A=");
    scanf("%d",&a);
    printf("Enter Value of B=");
    scanf("%d",&b);

    a+=b; //a=a+b
    printf("Add=%d\n",a);

    a-=b; //a=a-b
    printf("sub=%d\n",a);

    a*=b; //a=a*b
    printf("mul=%d\n",a);

    a/=b; //a=a/b
    printf("div=%d\n",a);

    return 0;

}