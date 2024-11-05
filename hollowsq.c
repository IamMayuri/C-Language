#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a value: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        if(i==n-1||i==0||j==n-1||j==0||j==n-1-i|i==j)
        printf(" * ");
        else{
            printf("   ");
        }
         printf("\n");
    }
   
    return 0;
}