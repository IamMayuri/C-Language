#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a value: ");
    scanf("%d",&n);
    {
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=i;j++)
            if(j==0||i==n-1||j==i||i==0)
            printf(" * ");
            else
            printf("   ");
             printf("\n");
        }
    }
       
    
    return 0;
}