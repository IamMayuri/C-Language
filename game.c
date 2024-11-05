#include<stdio.h>
#include<string.h>
// char printboard(c);
int main()
{
    char p[2][100];
    char s[2];
   printf("Enter a symbol 1 : ");
   scanf(" %c",&s[0]);
  printf("Enter a Player 1 name: ");
   scanf(" %s",p[0]);
    printf("Enter a symbol 2: ");
   scanf(" %c",&s[1]); 
    printf("Enter a Player 2 name: ");
   scanf(" %s",p[1]);
   for(int i=0;i<2;i++)
    printf("%c,%s\n",s[i],p[i]);
      {
   char board [3][3];
   for( int i=0;i<3;i++)
   {
        for(int j=0;j<3;j++)
        printf(" - ");
         printf(" \n");
   }
 
     
    return 0;
   }




