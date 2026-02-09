//DIGIT COUNTER
#include<stdio.h>
int main()
{
    int sum,n,m=1;

    printf("Enter any number=");
    scanf("%d",n);

      if (n < 0) {
        n = -n;
    }

    do {
        m++;      
        n /= 10;    
    } while (n != 0);

    printf("Number of digits: %d\n", m);

    
    return 0;

}
