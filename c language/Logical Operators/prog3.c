// to check whether a number lies between two given numbers. 
#include<stdio.h>
int main()
{
    int u,l,n;

    printf("Enter your lower number A=\n");
    scanf("%d",&l);
    printf("Enter your upper number B=\n");
    scanf("%d",&u);
    printf("Enter main number =\n");
    scanf("%d",&n);

    if(l<=n && u>=n)
    {
        printf("%d is lies between %d and %d\n",n,l,u);
    }
    else
    {
        printf("%d is not lies between %d and %d\n",n,l,u);
    }
    return 0;

}
