//Subtract one matrix from another
#include<stdio.h>
int main()
{
    int a[10][10], b[10][10];
    int sub[10][10];
    int m,n;
    int i,j;

    printf("Enter Rows=");
    scanf("%d",&m);

    printf("Enter columns=");
    scanf("%d",&n);

    printf("Matrix A:-\n");

    for( i=0 ; i<m ; i++)
    {
        for( j=0 ; j<n ; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0 ; i<m ; i++)
    {
        for( j=0 ; j<n ; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    
    printf("Matrix B:-\n");

    for( i=0 ; i<m ; i++)
    {
        for( j=0 ; j<n ; j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    for( i=0 ; i<m ; i++)
    {
        for( j=0 ; j<n ; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    
    printf("subtraction:-\n");

    for( i=0 ; i<m ; i++)
    {
        for( j=0 ; j<n ; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }

    }

    for( i=0 ; i<m ; i++)
    {
        for( j=0 ; j<n ; j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}
