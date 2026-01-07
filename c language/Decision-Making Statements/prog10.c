// to check whether a triangle is valid.
#include<stdio.h>
int main()
{
    int angle1,angle2,angle3,triangle;

    printf("Enter Angle 1=\n");
    scanf("%d",&angle1);
    printf("Enter Angle 2=\n");
    scanf("%d",&angle2);
    printf("Enter Angle 3=\n");
    scanf("%d",&angle3);

    triangle = angle1 + angle2 + angle3;

    if(triangle==180)
    {
        printf("Its valid triangle\n");    
    }
    else
    {
        printf("Its not valid triangle\n");
    }
    return 0;

}