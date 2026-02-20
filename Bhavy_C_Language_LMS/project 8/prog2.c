//cubes Gemerator using pointer
#include<stdio.h>
int main()
{
    int arr[10][10];
    int (*p)[10]=arr;
    int row,col;

    printf("Enter Row =");
    scanf("%d",&row);

    printf("Enter column =");
    scanf("%d",&col);

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            printf("Enter Element [%d][%d]=",i,j);
            scanf("%d",&p[i][j]);
        }
        printf("\n");
    }

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            printf("%d ",p[i][j]*p[i][j]*p[i][j]);
        }
        printf("\n");
    }
    return 0;
}