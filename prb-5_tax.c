#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);

    if(a<250000)
    {
        printf("No tax");
    }
    else if(a>=250000 && a< 500000)
    {
        printf("Ammount of Tax: %f",(5*a)/100);
    }
    else if(a>=500000 && a< 1000000)
    {
        printf("Ammount of Tax: %f",(20*a)/100);
    }
    else if(a>1000000)
    {
        printf("Ammount of Tax: %f",(30*a)/100);
    }
    else if(a<0)
    {
        printf("Invalid input");
    }
    return 0;
}