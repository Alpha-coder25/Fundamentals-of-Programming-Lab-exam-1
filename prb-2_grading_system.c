#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    if(m>=90 && m<=100)
    {
        printf("You got A");
    }
    else if(m>=80 && m<= 89)
    {
        printf("You got B");
    }
    else if(m>=70 && m<=79)
    {
        printf("You got C");
    }
    else if(m>=60 && m<=69)
    {
        printf("You got D");
    }
    else if(m<60)
    {
        printf("You got F");
    }
    else if(m<0 || m>100)
    {
        printf("Invalid input");
    }
    
    return 0;
}