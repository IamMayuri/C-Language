#include<stdio.h>
int main()
{
    FILE* f;
    f=fopen("myfile.txt","w");
    fprintf(f,"Hello!");

    fclose(f);
    return 0;
}