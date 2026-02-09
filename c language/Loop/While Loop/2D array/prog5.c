//Multiply two compatible matrices
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    int mul[10][10];
    int c,d;
    int i,j;

    printf("Enter Rows=");
    scanf("%d",&c);

    printf("Enter columns=");
    scanf("%d",&d);

    printf("Matrix A:-\n");

    for(i=0 ; i<c ; i++)
    {
        for(j=0 ; j<d ; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0 ; i<c ; i++)
    {
        for(j=0 ; j<d ; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:-\n");

    for(i=0 ; i<c ; i++)
    {
        for(j=0 ; j<d ; j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    
    for(i=0 ; i<c ; i++)
    {
        for(j=0 ; j<d ; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication:- \n");

    for(i=0 ; i<c ; i++)
    {
        for(j=0 ; j<d ; j++)
        {
            mul[i][j] = a[i][j] * b[i][j];
        }
    }
    
    for(i=0 ; i<c ; i++)
    {
        for(j=0 ; j<d ; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}