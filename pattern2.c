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
       if(j==0||j==2*i)
        printf(" * ");
        else
        printf("   ");
        printf("\n");
    }
    {
        for(int k=1;k<n;k++)
        {
            for(int m=1;m<=k;m++)
                printf("   ");
            {
            for(int m=1;m<=2*(n-k);m++)
            if(m==2||m==2*(n-k))
            printf(" * ");
            else
            printf("   ");
            }
            
                
        
        printf("\n");
        }
    }
    return 0;
}