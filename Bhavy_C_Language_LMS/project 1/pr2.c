//Gross salary calculater
#include<stdio.h>
int main()
{
    float bsalary,da,hra,ta,gsalary;

    printf("Enter your Basic salary=");
    scanf("%f",&bsalary);

    da=bsalary*0.20;
    hra=bsalary*0.30;
    ta=bsalary*0.10;

    gsalary=da+hra+ta;

    printf("------------Details salary-----------\n");
    printf("Basic salary=%.2f\n",bsalary);
    printf("Dearness Allowance[%%20]=%.2f\n",da);
    printf("House Rent Allowance[%%30]=%.2f\n",hra);
    printf("Travelling Allowance[%%10]=%.2f\n",ta);
    printf("Gross Salary=%.2f\n",gsalary);
    return 0;
}