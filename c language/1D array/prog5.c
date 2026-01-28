//Find the largest element in an array
#include<stdio.h>
int main()
{
    int arr[6]={10 , 20 , 30 , 40 , 50, 60};
    int max=arr[0];
    int size= sizeof(arr)/sizeof(arr[0]);

    for(int i=0 ; i<size ; i++)
    {
        if(arr[i] > max){
        max=arr[i];
        }
    }
     printf("Largest number=%d",max);

    return 0;
}