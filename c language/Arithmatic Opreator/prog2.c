// formal related arthimatic opreator
#include<stdio.h>
int main()
{
    int length=20 ,width=10;
    float pie=3.14,radius=60;
    int principle =200000,rate=6,time=5; 
    float celsius=16;
    int square=4;
    int side=5;

    // Area of rectangle
    printf("Area of rectangle =%d\n", length*width);

    // Area of circle
    printf("Area of circle =%0.2f\n",pie*radius*radius);

    // Simple Intrest 
    printf("Simple Intrest=%d\n",principle*rate*time/100);

    //convert celsius to fahrenheit
    printf("Fahrenheit =%0.2f\n",(celsius*9/5)+32);

    //calculate square
    printf("square=%d\n",square*square);

    //calculate cube
    printf("cube=%d\n",side*side*side); 
    return 0;

}