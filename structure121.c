#include<stdio.h>
#include<string.h>
 int main () {
    struct person{
        char name[50];
        int salary;
        int age;
    }p1;
    //struct person p1{
    {
       printf("\nEnter Salary :");
     scanf("%d",&p1.salary);
    printf("\nEnter Age :");
    scanf("%d",&p1.age);
     printf("\nEnter name :");
      scanf("%s",&p1.name);
     strcpy(p1.name,p1.name);
    // printf("%s",p1.name);
    };
 }
    /*
    int main ()
    {
        struct book {
            int noOfpages;
            int price;
            char name[50];
        }b1,b2;
        //struct book b1{
        {
            printf("Enter noOfpages:");
            scanf("%d",&b1.noOfpages);
            printf("Enter price:");
            scanf("%d",&b1.price);
            printf("Enter name :");
           // scanf("%s",&b1.name);
          // strcpy(b1.name,*b1.name);
          strcpy(b1.name,"Alice in wonder land");
          printf("%s",b1.name);
        };
         {
            printf(" \n Enter noOfpages:");
            scanf("%d",&b2.noOfpages);
            printf("Enter price:");
            scanf("%d",&b2.price);
            printf("Enter name :");
           // scanf("%s",&b1.name);
          // strcpy(b1.name,*b1.name);
          strcpy(b2.name,"fairy tale");
          printf("%s",b2.name);
          
        };
        */
    


