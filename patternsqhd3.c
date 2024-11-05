#include<stdio.h>
int main()
{
  int i,j,k,n;
  printf("Enter a value: ");
  scanf("%d",&n);
 {
  for(i=0;i<=2*n;i++)
  printf(" * ");
  printf("\n");
  {
  for(i=0;i<=n-1;i++)
   {
    for(j=1;j<=n-i;j++)
    printf(" * ");
    for(k=0;k<2*i+1;k++)
    printf("   ");
    for(j=1;j<=n-i;j++)
    printf(" * ");
    if(i<n){
   printf("\n");}
    }
    {
     for(i=2;i<=n-1;i++)
   {
    for(j=0;j<i;j++)
    printf(" * ");
    for(k=0;k<=2*(n-i);k++)
    printf("   ");
    for(j=0;j<i;j++)
    printf(" * ");
    printf("\n");
   }
    for(i=0;i<=2*n;i++)
  printf(" * ");
  }
  }
 }
 return 0;
}
  