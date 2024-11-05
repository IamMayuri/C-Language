#include<stdio.h>
int main()
{
    int i,j;
   int a[10][10];
   for(i=0;i<10;i++)
   {
    
    for(j=0;j<10;j++)
    {
        a[i][j] = '*';
    }
   }
   {
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
   }
   return 0;
}
 