// to check whether a student is eligible for scholarship based on marks and attendance. 
#include<stdio.h>
int main()
{
    int marks ,att;

    printf("Enter marks of student=\n");
    scanf("%d",&marks);
    printf("Enter marks of Attendance=\n");
    scanf("%d",&att);
    
    if(att>=80 && marks>=85)
    {
        printf("You are eligible for scholarship\n");

    }
    else
    {
        printf("You are not eligible for scholarship\n");
    }
    return 0;

}