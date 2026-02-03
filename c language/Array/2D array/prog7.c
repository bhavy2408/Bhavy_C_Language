//**Matrix Transpose**
//Convert rows to columns and vice versa
#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j;
    int m,n;

    printf("Enter Rows=");
    scanf("%d",&m);

    
    printf("Enter columns=");
    scanf("%d",&n);

    printf("Matrix:-\n");

    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose matrix:-\n");

    for(i=0 ; i<m ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }


    return 0;
}