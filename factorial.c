#include<stdio.h>
int fact(int n);
int main()
{
    int n,x;
    printf("Entered a value: ");
    scanf("%d",&n);
    x=fact(n);
   // printf("Factorial of a entered number is : %d",fact(n));
    return 0;
}
int fact(int n)
{
   int factorial=1,i=1,a=1;
   if(n==0){
      printf("%d",a);
   }       
   while(i<=n){
    factorial=factorial*i;
    printf("%d\n",factorial);
    i++;
   }
   return factorial;
   }