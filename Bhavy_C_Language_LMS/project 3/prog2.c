//Digit Counter
#include<stdio.h>
int main()
{
   int a;
   int count=0;

   printf("Enter your Number=");
   scanf("%d",&a);

   printf("Number=%d",a);

    for(int i=0 ; i<a ; ++i)
    {
        if(count > 0)
        {
            i++;
        }
        break;
    }
    printf("Count Number=%d",count);

    return 0;

}
