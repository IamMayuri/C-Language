#include<stdio.h>
#include<string.h>
struct data{
    int rollno;
    char name[50];
};
int main(){
    int i;
    struct data student[4];
    
    for(i=0;i<4;i++)
    {
        printf("Enter Roll no.%d : ",i+1);
        scanf("%d",&student[i].rollno);
         printf("Enter name %d : ",i+1);
        scanf("%s",&student[i].name);
    }
     for(i=0;i<4;i++){
     printf("\nGiven rollnumbers:%d",student[i].rollno);
     printf("\nGiven name:%s",student[i].name);
    }
    return 0;
}