#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the coefficients of x^2, x and the constant: ");
    scanf("%d%d%d",&a,&b,&c);

    int det = (b*b) - 4*a*c;

    if(det>0)
    {
        printf("Two real roots exist");
    }
    else if(det==0)
    {
        printf("One real root");
    }
    else if( det<0)
    {
        printf("Imaginary root");
    }
    return 0;
}