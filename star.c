#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a value:");
    scanf("%d",&n);
     for(i=0;i<=n-1;i++)
    {
                                        
        for(j=0;j<=3*n-i-1;j++)
        {
       printf(" ");
       }                             /*       *
                                            *   * 
                                          *       *   */
       for(j=0;j<=2*i;j++)
       {
        if(j==0||j==2*i)
        printf(" *");
        else
        printf(" ");
        }
         printf("\n");
    }
        {
         for(i=0;i<=n-1;i++)              /*   * * * *
                                                *
                                                 *
                                                         */
         {
            for(j=0;j<=i;j++)
            {
            printf(" ");
            }
            for(j=0;j<=n-i-1;j++)
            {
                if(i==0||j==n-i-1)
                printf(" *");
            }
            
             printf("\n");
         }
           /* for(i=0;i<=2*n+1;i++)
            {
            for(j=0;j<=2*n+1;j++)
            {
                printf(" ");
            }
            printf("\n");
            }
            for(j=0;j<=2*n+1;j++)
            {
                if(j==0||j==2*n+1-i)
                printf(" *");
            }
            printf("\n");
          }
            */
          {
          for(i=0;i<=n-1;i++)                  /*|    *
                                                     *
                                                    * * *    |*/
        {
            for(j=0;j<=n-i-1;j++)
            {
                printf(" ");
            }
            for(j=0;j<=i;j++)
             if(i==n-1||j==i)
                printf(" *");
                
                if(i==n-1||j==n)
                {
                  /*  for(i=0;i<=n-1;i++)
                    {
                        for(j=0;j<=2*n;j++)
                        {
                            printf(" ");
                        }
                        for(j=0;j<=2*n-i;j++)
                        {
                            if(j==0||j==i)
                            printf(" *");
                             //printf("\n");
                        }
                         printf("\n");*/
                         
                          //for(i=0;i<=n-1;i++)
    
             
             
                
              for(i=0;i<=n-1;i++)
              {
             // if(i>n)
                
                                    
        for(j=0;j<=2*n+i;j++)
        {
          //  if(j==0||j<=2*n+i)
       printf(" ");
       }   
                               /*       *
                                            *   * 
                                          *       *   */
       for(j=0;j<=2*(n-i-1);j++)
       {
        //if(j==0||j==2*(n-i-1))
        printf(" *");
       // else
     // printf(" ");
        }
        
         printf("\n");
                        
                    }
                    
                }
                printf("\n");
                
            }
           /* for(i=0;i<=n-1;i++)
            {
                for(j=0;j<=n-1+i;j++)
                printf(" ");
                {
                    for(j=0;j<=2*n-i-1;j++)
                    {
                       // if(j==i||j==4*n-i-1)
                        printf(" *");
                        printf("\n");
                    }
                }
            
           
        }*/
     
}
}
return 0; 
        } 
  
