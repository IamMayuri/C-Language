#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value: ");
    scanf("%d",&n);
    if(n%21==0)
    {
        printf(" Entered number is divisible by 3,7 and 21");
    }
    else if(n%7==0)
    {
        printf("Entered number is divisible by 7");
    }
    else if(n%3==0)
    {
        printf("Entered number is divisible by 3");
    }
    else{
        printf("Number is divible by none  ");
    }
    return 0;
}