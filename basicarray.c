/*#include<stdio.h>   //input marks and check it is pass or not 
int main()
{
    int i;
   int marks[10];
   for(i=0;i<10;i++){
   printf("Enter a value: %d-",i+1);
   scanf("%d",&marks[i]);
   }
     for(i=0;i<10;i++){
   if(marks[i]<35){
    printf("\n Roll number of fail students:%d",i);
   }
   }
   return 0;
}*/
/*#include<stdio.h> //sum of all entered number
int main(){
int i,n;
printf("Enter a size of array:");
scanf("%d",&n);
int sum[n];
for(i=0;i<=n-1;i++){
printf("Enter a value %d-",i+1);
scanf("%d",&sum[i]);
}
 int Total=0;
for(i=0;i<=n-1;i++){
   
    Total =Total+sum[i];}
    printf("%d ",Total);

return 0;
}*/
/* #include<stdio.h> // find max value , for min value change the sign in if condition and value =max[i]
int main()
{
  int i,n;
  printf("Enter a size of array : ");
  scanf("%d",&n);
  int max[n];
  for(i=0;i<=n-1;i++)
  {
    printf("Enter a positive number
    : ");
    scanf("%d",&max[i]);
  }
  int value=-1;
  for(i=0;i<=n-1;i++)
  {
    
    if(value<max[i])
    {
      value =max[i];
  }
  
  }
  printf("Maximum value:%d ",value);
  return 0;
}*/
#include<stdio.h>
int main()
{
  int i,j,n,a=0;
  
  printf("Enter a value:");
  scanf("%d",&n);  
  int arr[n];
  for(i=0;i<n;i++)
  {
    printf("ENter phoneno. %d:",i+1);
    scanf("%d",&arr[i]);
  }
 // printf("\ncontacts:-");
  for(i=0;i<n;i++)
  
  
    
//printf("\n%d",arr[i]);
a+=arr[i];
i=i+1;

printf("%d",a/n);

  
}
