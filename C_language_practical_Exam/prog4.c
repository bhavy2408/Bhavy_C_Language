//Write a C program to find square of each elements of an 1D array using Pointer.
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    int sqr;
    printf("Square of each Element:-");
    for(int i=0;i<5;i++)
    {
        sqr= *p * *p;
        printf("Square of element %d=%d\n",i+1,sqr);
        *p++;
    }

    return 0;

}
