//to check whether a student is pass or fail (passing marks = 35).
#include<stdio.h>
int main()
{
    int m;
    
    printf("Enter your Marks=\n");
    scanf("%d",&m);

    if(m>80 && m<100)
    {
        printf("Excelent !\n");
    }
    else if(m>60 && m<80)
    {
        printf("very good!\n");
    }
    else if(m>35 && m<60)
    {
        printf(" good!\n");
    }
    else if(m<35)
    {
        printf("fail !\n");
    }

    // to compare marks of two students and display who scored higher. 

    int s1,s2;

    printf("Enter Marks student 1=\n");
    scanf("%d",&s1);
    printf("Enter Marks student 2=\n");
    scanf("%d",&s2);

    if(s1>s2)
    {
        printf("student 1 is highest marks\n");
    } 
    else
    {
        printf("student 2 is highest marks\n");
    }

    return 0;
}