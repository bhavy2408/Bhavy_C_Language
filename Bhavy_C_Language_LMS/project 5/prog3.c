//Transpose 2D array
#include<stdio.h>
int main()
{
    int a[10][10];
    int row , col;

    printf("Enter Rows=");
    scanf("%d",&row);

    printf("Enter columns=");
    scanf("%d",&col);

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            printf("Enter Element a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix:-\n");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:-\n");

    
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}