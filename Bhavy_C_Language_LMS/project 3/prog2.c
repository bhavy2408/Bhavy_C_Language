//DIGIT COUNTER
#include<stdio.h>
int main()
{
    int a, count=0,sum;

    printf("Enter Any Number=");
    scanf("%d",&a);

    if(a == 0)
    {
        count=1;
    }else if(a < 0)
    {
        a=-a;
    }

    while(a > 0)
    {
        a=a/10;
        count++;
    }

    printf("Total Number Of digit=%d",count);
    return 0;

}
