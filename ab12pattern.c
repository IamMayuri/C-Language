#include<stdio.h>
int main()
{
    int n,j,i;
    int k=1;
    char ch='A';
  
    printf("ENter a value:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
       
        if(i%2==0)
        printf("%d",k++);
        
      else 
     // for(int m=0;m<i;m++)
     // for( j=65;j<=i;j++)
        printf("%c",ch+j); 
        printf("\n");
       
    }  
    return 0;
}
