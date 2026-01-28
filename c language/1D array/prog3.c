//Calculate the sum of all elements in an array
#include<stdio.h>
int main()
{
    int arr[6]={10 , 20 ,30 , 40 , 50 , 60};
    int size= sizeof(arr)/sizeof(arr[0]);
    int sum=0;

    for(int i=0 ; i < size ; i++)
    {
        sum+=arr[i];
    }
    printf("sum of all elements= %d",sum);
    return 0;
}