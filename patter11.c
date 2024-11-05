#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a value:");
    scanf("%d",&n);
    {
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=i;j++)
            printf("   ");
            {
                for(j=0;j<=2*(n-1-i);j++)
                printf(" * ");
            }
             printf("\n");

        
        }
       
    }
}