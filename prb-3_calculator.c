#include<stdio.h>
int main()
{
    float a,b;
    char c;
    scanf("%c%f%f",&c,&a,&b);
    
    if(c == '+')
    {
        printf("%.0f + %.0f = %.0f",a,b,a+b);
    }
    else if(c == '-')
    {
        printf("%.0f + %.0f = %.0f",a,b,a-b);
    }
    else if(c == '*')
    {
        printf("%f + %f = %.2f",a,b,a*b);
    }
    else if(c == '/')
    {
        printf("%f + %f = %.2f",a,b,a/b);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}