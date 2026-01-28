//Find the average of all array elements
#include<stdio.h>
int main()
{
    int arr[7]={10 , 20 , 30 , 50 , 70  , 40 , 60};
    int  n=sizeof(arr)/sizeof(arr[0]);;
    int sum=0;
    int average;
    

    for(int i=0 ; i<n; i++){
    sum+=arr[i]; 
    }
    printf("total=%d",sum);
    average=sum/n;
    printf("\nAverage=%d",average);
    return 0;
}