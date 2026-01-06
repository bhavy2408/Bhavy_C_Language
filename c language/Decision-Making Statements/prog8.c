//  to check whether a student is pass or fail. 
#include<stdio.h>
int main()
{
    float per;

    printf("Enter ypur percentage=\n");
    scanf("%f",&per);

    if(per>=45)
    {
        printf("pass\n");
    } 
    else{
        printf("fail\n");
    }
    return 0;
}