//Read matrix from user and display it

#include<stdio.h>
int main()
{
    int arr[10][10];
    int n,m;

    printf("Enter of rows=");
    scanf("%d",&n);

    printf("Enter of columns=");
    scanf("%d",&m);


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix:-\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}