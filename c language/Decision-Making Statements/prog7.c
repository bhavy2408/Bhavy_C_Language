// to calculate total marks, percentage, and grade using if-else.
#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5;
    float per,total;

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
    printf("Total Marks=%.2f\n",total);
    
    per=(total/500)*100;
    printf("Percentage =%0.2f%%\n",per);

    if(per>=90)
    {
        printf("Grade=A");
    }
    else if(per>=70)
    {
        printf("Grade=B");
    }
    else if(per>=50)
    {
        printf("Grade=C");
    }
    else if(per>=45)
    {
        printf("Grade=D");
    }
    else
    {
        printf("Fail\n");
    }

    
    return 0;

}