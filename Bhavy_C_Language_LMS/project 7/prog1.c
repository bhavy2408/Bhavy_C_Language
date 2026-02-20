//Calculater
#include<stdio.h>
float add(float a,float b){
    return a + b;
}
float sub(float a,float b){
    return a - b;
}
float mul(float a,float b){
    return a * b;
}
float div(float a,float b){
    return a / b;
}
float mod(int a,int b){
    return a % b;
}
int main()
{
    float num1 ,num2;
    int n1,n2;
    int choice;

    do{
       printf("\n===== Calculator Menu =====\n");
        printf("0. Exit\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("===========================\n");

    printf("Enter Your choice(0 to 5)=");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Addition:-\n");
            printf("Enter 1 number=\n");
            scanf("%f",&num1);
            printf("Enter 2 number=\n");
            scanf("%f",&num2);

            printf("Addition =%.2f\n",add(num1,num2));

            break;

        case 2:
            printf("Subtraction:-\n");
            printf("Enter 1 number=\n");
            scanf("%f",&num1);
            printf("Enter 2 number=\n");
            scanf("%f",&num2);

            printf("Subtraction =%.2f\n",sub(num1,num2));

            break;

        case 3:
            printf("multiplication:-\n");
            printf("Enter 1 number=\n");
            scanf("%f",&num1);
            printf("Enter 2 number=\n");
            scanf("%f",&num2);

            printf("Multiplication =%.2f\n",mul(num1,num2));

            break;
        
        case 4:
            printf("Division:-\n");
            printf("Enter 1 number=\n");
            scanf("%f",&num1);
            printf("Enter 2 number=\n");
            scanf("%f",&num2);

            if(num2 != 0)
                    printf("Division = %.2f\n", div(num1, num2));
                else
                    printf("Error! Division by zero\n");
                break;
            break;

        case 5:
            printf("Modulus:-\n");
            printf("Enter 1 number=\n");
            scanf("%f",&n1);
            printf("Enter 2 number=\n");
            scanf("%f",&n2);

            printf("Modulus =%d\n",add(n1,n2));
        
            break;
        
        case 0:
            printf("Exit:-");
            break;

        default:
            printf("Invalid choice\n");

    }

    }while(choice != 0);
    return 0;
}