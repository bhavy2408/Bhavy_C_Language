// to calculate total marks and percentage of five subjects.
#include<stdio.h>
int main()
{
    int total,s1,s2,s3,s4,s5;
    float per;

    printf("\nEnter Subjects marks:-\n");
    printf("=========================\n");
    printf("1.Science=");
    scanf("%d",&s1);
    printf("2.Maths=");
    scanf("%d",&s2);
    printf("3.Social Science=");
    scanf("%d",&s3);
    printf("4.English=");
    scanf("%d",&s4);
    printf("5.Gujarati=");
    scanf("%d",&s5);
    printf("=========================\n");
    total=s1+s2+s3+s4+s5;
    printf("Total Marks=%d\n",total);
    per=total/5;
    printf("Percentage =%0.2f\n",per);

    return 0;
}