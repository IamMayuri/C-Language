/*#include<stdio.h>
int main()
{
    printf("Hello");
    return 0;
} for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=n-i-1;j++)
            {
                printf("   ");
            }
            for(j=0;j<=i;j++)
            { {
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=i;j++)
            printf("   ");
            {
                for(j=0;j<=2*(n-1-i);j++)
                {
             if(j==0||j==2*(n-i-1)||i==0)
             printf(" * ");
             else
             printf("   ");
             }
                
            }
             printf("\n");
                if(i==n-1||j==i)
                printf(" * ");
            }
            printf("\n");
        }

    }
}*/
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a value:");
    scanf("%d",&n);
  for(i=0;i<=n-1;i++)
    {
                                        
        for(j=0;j<=3*n+i;j++)
        {
       printf(" ");
       }                             /*       *
                                            *   * 
                                          *       *   */
       for(j=0;j<=2*(n-i-1);j++)
       {
        if(j==0||j==2*(n-i-1))
        printf(" *");
        else
      printf(" ");
        }
         printf("\n");
    }
    return 0;
    }
