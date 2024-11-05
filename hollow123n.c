#include<stdio.h>
int main()
{
    int i,j,n;
    int m=2;
    int k=1;
    printf("Enter a value: ");
    scanf("%d",&n);
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i+1;j++)
            if(j==1)
            printf(" %d ",k++);
            else if (i==1)
            printf(" %d ",m++);
            else if(j==n-i+1)
            printf(" %d ",n);
            else
            printf("   ");
            printf("\n");
            
            
        }
    }
    return 0;

}