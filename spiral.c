#include<stdio.h>
int main()
{
    
    int n,i,j;
    printf("Enter a value: ");
    scanf("%d", &n);
    int spiral[n][n];
    int top=0;
    int left=0;
    int right=n-1;
    int bottom=n-1;
    int x=1;
    while(top<=bottom&&left<=right)
    {
        for(int i=left;i<=right;i++)
        {
        spiral[top][i]=x;
        x++;
      }
    top++;
    for(int i=top;i<=bottom;i++)
    {
     spiral[i][right]=x;
     x++;
    }
    right--;
    for(int i=right;i>=left;i--){
     spiral[bottom][i]=x;
     x++;
    }
	bottom--;
    for(int i=bottom;i>=top;i--){
    spiral[i][left]=x;
    x++;
    }
	left++;
}

for(int i=0;i<=n-1;i++)
{
    for(int j=0;j<=n-1;j++)
    printf("%4d",spiral[i][j]);
    printf("\n");
}
return 0;
}