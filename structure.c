#include<stdio.h>
#include<string.h>
struct student{
    int rollNO;
    char name[50];
};
int main()
{
    //struct student s1;
     struct student s1;
       strcpy( s1.name,"Aashi");
    printf("%s", s1.name);
    
    return 0;
}
