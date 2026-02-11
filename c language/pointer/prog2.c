//array of pointer
#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr;
    ptr = arr;

    for(int i=0 ; i<5 ; i++)
    {
        printf("value ofarr[%d]:%d\n",i,ptr[i]);
         printf("Address:%p\n",*(ptr+1));
    }
    return 0;
}