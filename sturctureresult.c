#include<stdio.h>
#include<string.h>
int perc( int a,int b,int c);

struct student{ 
    int rollno;
    char name[50];
    int physicsmarks;
     int chemistrymarks;
    int mathmarks;
     float percentage;
   // char grade[4];
};
int main ()
{
  int a,  b,  c;
    struct student s1;
    printf("Enter a rollnumber: ");
    scanf("%d",&s1.rollno);
    printf("Enter a name: ");
    scanf("%s",&s1.name);
   printf("Enter a physicsmarks:");
    scanf("%d",&s1.physicsmarks);
      printf("Enter a chemistrymarks:");
    scanf("%d",&s1.chemistrymarks);
      printf("Enter a mathmarks:");
    scanf("%d",&s1.mathmarks);
    float p=(s1.physicsmarks+s1.chemistrymarks+s1.mathmarks)/3.0;
      printf("Percentage: %.2f %% ", p);
       printf("\n\nrollno. \t\t name \t\t physics \t chemistry \t maths \t\t Percentage ");
    printf("\n\n%d \t\t %s \t %d \t\t %d \t\t %d \t\t %.2f %%",s1.rollno,s1.name,s1.physicsmarks,s1.chemistrymarks,s1.mathmarks,p);
   return 0; 
}
//int perc( int a,int b,int c)
//{
//  float p=(a+b+c)/3.0;
 // return p;
//}