#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a value:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        
        for(j=0;j<=n-i-1;j++)
        {
       printf("   ");
       }
       for(j=0;j<=2*i;j++)
       {
        printf(" * ");
        }
        printf("\n");
    }
    return 0;
}