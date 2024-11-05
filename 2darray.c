#include<stdio.h>
int main()
{
    int rows, columns ,i,j;
    printf("Enter a number of rows :");
    scanf("%d",&rows); 
    printf("Enter a number of columns:");
    scanf("%d",&columns);
    {
   int matrix1[rows][columns];
   int matrix2[rows][columns];
   int sum[rows][columns];
   {
    for(i=0;i<rows;i++)
     for(j=0;j<columns;j++){
       printf("Enter matrix 1:");
      scanf("%d",&matrix1[i][j]);
     }
      printf("\n"); 
     }
    {
     for(i=0;i<rows;i++)
     for(j=0;j<columns;j++){ 
    printf("Enter matrix 2:");
    scanf("%d",&matrix2[i][j]);
     }
    printf("\n");

    }
    {
        
     for(i=0;i<rows;i++)
     for(j=0;j<columns;j++){
        sum[i][j]=matrix1[i][j]+matrix2[i][j];
     }
    }
    {
    for(i=0;i<rows;i++)
     for(j=0;j<columns;j++){
        printf("  %d",sum[i][j]);
     }
        printf("\n");
     }
   
}
    
return 0;
}