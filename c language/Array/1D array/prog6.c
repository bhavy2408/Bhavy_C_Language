//Find the smallest element in an array
#include<stdio.h>
int main()
{
    int arr[5]={10 , 20 , 5 , 40 , 50 };
    int size=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];

    for(int i=0 ; i<size ; i++)
    {
        if(min > arr[i]) 
        {
            min=arr[i];
        }
    }
    printf("smallest number=%d",min);
    return 0;
}