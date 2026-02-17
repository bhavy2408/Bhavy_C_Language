//Create a C program to find the largest element in an 1D array.
#include<stdio.h>
int main()
{
    int arr[5]={10,90,30,50,40};
    int max=0;

    for(int i=0;i<5;i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }  
    }
    printf("Largest number =%d\n",max);

    return 0;
}