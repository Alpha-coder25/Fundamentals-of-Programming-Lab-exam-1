#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    if(a<0 || b<0 || c<0)
    {
        printf("Invalid Input");
    }
    else if((a==b) && (b==c))
    {
        printf("It is an equillateral triangle");
    }
    else if(a!=b && b!=c)
    {
        printf("It is a scalene triangle");
    }
    else if((a=b && c!=b) || (a=c && b!=c) || (b=c && a!=b))
    {
        printf("It is an isosceles triangle");
    }
    return 0;
}