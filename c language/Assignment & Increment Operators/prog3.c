// To demonstrate pre-decrement and post-decrement operators.
#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter value A=");
    scanf("%d",&a);

    printf("------pre-decrement------\n");
    printf("value of A=%d\n",--a);
    printf("value of B=%d\n",--a);
    printf("value of C=%d\n",--a);

    int x,y,z;

    printf("Enter value X=");
    scanf("%d",&x);


    printf("------post-decrement------\n");
    printf("value of X=%d\n",x--);
    printf("value of Y=%d\n",x--);
    printf("value of Z=%d\n",x--);

    return 0;

}