// Tempreture Converter
#include<stdio.h>
int main()
{
    float f,cel;


    printf("Enter Celsius=");
    scanf("%f",&cel);

    f=(1.8*cel)+32;

    printf("\nTempreature Converter\n");
    printf("-------------------------\n");
    printf("The temperature in celsius=%.2f\n",cel);
    printf("The temperature in fahrenheit=%0.2f\n",f);

    return 0;
}