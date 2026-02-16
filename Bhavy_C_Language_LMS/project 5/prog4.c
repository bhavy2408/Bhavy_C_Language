//sum of all Elements in rows and columns 
#include<stdio.h>
int main()
{
    int a[10][10];
    int row , col, sum ,rowNo,colNo;
    int rowSum=0,colSum=0;

    printf("Enter rows=");
    scanf("%d",&row);

    printf("Enter columns=");
    scanf("%d",&col);

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            printf("Enter Your Element a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter Your Row (1 to %d)=",row);
    scanf("%d",&rowNo);
    for(int j=0 ; j<col ; j++)
    {
        rowSum += a[rowNo-1][j];
    }
    printf("Sum of row %d=%d\n",rowNo,rowSum);

    printf("Enter Your Row (1 to %d)=",col);
    scanf("%d",&colNo);
    for(int i=0 ; i<row ; i++)
    {
        colSum += a[i][colNo-1];
    }
    printf("Sum of column %d=%d\n",colNo,colSum);
    
return 0;
}

