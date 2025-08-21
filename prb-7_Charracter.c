#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);

    if(c>='A' && c<='Z')
    {
        printf("Uppercase Letter");
    }
    else if(c>='a'&&c<'z')
    {
        printf("Lowercase Letter");
    }
    else if(c>='0' && c<='9')
    {
        printf("Digits");
    }
    else{
        printf("Special Character");
    }
    return 0;
}