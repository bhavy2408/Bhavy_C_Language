//To demonstrate pre-increment and post-increment operators.
#include<stdio.h>
int main()
{
    int x,y,z;

    printf("Enter value X=");
    scanf("%d",&x);

    printf("-------post-increment-------\n");
    printf("value x=%d\n",x++);
    printf("value y=%d\n",x++);
    printf("value z=%d\n",x++);

    int a,b,c;

    printf("Enter value a=");
    scanf("%d",&a);

    printf("-------pre-increment-------\n");
    printf("value a=%d\n",++a);
    printf("value b=%d\n",++a);
    printf("value c=%d\n",++a);
    return 0;
}