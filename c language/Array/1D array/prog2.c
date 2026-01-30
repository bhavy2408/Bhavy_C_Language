//Read array elements from user and display them
#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40};
    int n=arr[3];
    printf("Enter Array (0 to 3)=\n");
    scanf("%d",&n);

    printf("Array = %d",arr[n]);
    return 0;
}