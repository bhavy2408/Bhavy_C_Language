//negative Element in 1d array
#include<stdio.h>
int main()
{
    int arr[5] , i ;

    for(i=0 ; i<5 ; i++)
    {
        printf("Enter Element a[%d]=",i);
        scanf("%d",&arr[i]);
    }

    for(i=0 ; i<5 ; i++)
    {
        if(arr[i] < 0)
        {
        printf("Negative Number a[%d]=%d\n",i,arr[i]);
        }      
    }
    return 0;

}