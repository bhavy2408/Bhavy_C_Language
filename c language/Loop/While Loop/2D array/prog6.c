//Add two matrices of same size

#include<stdio.h>
int main()
{
    int m[10][10];
    int n[10][10];
    int a,b;
    int sum[10][10];

    printf("Enter Matrix data has Same size\n");

    printf("Enter rows=");
    scanf("%d",&a);

    printf("Enter columns=");
    scanf("%d",&b);

    printf("Matrix A:- \n");
    for(int i=0; i<a ; i++)
    {
        for(int j=0; j<b ; j++)
        {
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<a ; i++)
    {
        for(int j=0; j<b ; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:- \n");
        for(int i=0; i<a ; i++)
    {
        for(int j=0; j<b ; j++)
        {
            scanf("%d",&n[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<a ; i++)
    {
        for(int j=0; j<b ; j++)
        {
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }

    printf("Addition:-\n");

    for(int i=0; i<a ; i++)
    {
        for(int j=0; j<b ; j++)
        {
            sum[i][j] = m[i][j] + n[i][j];
        }
    }

      for(int i=0; i<a ; i++)
    {
        for(int j=0; j<b ; j++)
        {

            printf("%d",sum[i][j]);
        }
        printf("\n");
    }


    return 0;
    

}