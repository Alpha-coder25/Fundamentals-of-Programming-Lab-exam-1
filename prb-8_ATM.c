#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a<500)
    {
        printf("You can not withdraw less than 500");
    }
    else if(a<0 || a%50 !=0)
    {
        printf("Enter a valid ammount");
    }
    
    else{
    int n500 = a/500;
    a = a % 500;
    int n200 = a/200;
    a = a % 200;
    int n100 = a/100;
    a = a % 100;
    int n50 = a/50;

    printf("500 taka notes needed: %d\n",n500);
    printf("200 taka notes needed: %d\n",n200);
    printf("100 taka notes needed: %d\n",n100);
    printf("50 taka notes needed: %d\n",n50);
    }

    return 0;
}