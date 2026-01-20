//5
//54
//543
//5432
//54321
#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i++)
    {
        for(int j=i;j<=1;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}