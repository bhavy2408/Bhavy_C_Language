//Triangle Angle Finder
#include<stdio.h>
int main()
{
    int a1,a2,a3;

    printf("Enter Details About Angle\n");
    printf("First Angle=\n",a1);
    scanf("%d",&a1);
    printf("Second Angle=\n",a2);
    scanf("%d",&a2);

    a3=180-(a1+a2);

    printf("Third Angle=%d\n",a3);
    return 0;
}