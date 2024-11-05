#include<stdio.h>
int factorial (int a);
int ncr(int n,int r);
int main()
{
    int i,j,n;
    printf("Enter a value:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-i;j++){
        printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            int y=ncr(i,j);
            printf("%3d ",y);
        }
        printf("\n");

    }
    return 0;
}
int factorial(int a)
{ 
    int i;
    int fact=1;
    for(i=2;i<=a;i++)
    fact=fact*i;
    return fact;
}
int ncr(int n,int r)
{
    
    int x=factorial(n)/(factorial(r)*factorial(n-r));
    return x;
}