//Print multiplication table using for loop 
#include<stdio.h>
int main()
{
    int i,num;

    printf("Enter Number=");
    scanf("%d",&num);

    printf("Multiplication Number %d:-",num);

    for(i=1;i<=10;++i)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}