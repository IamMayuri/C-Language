#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter a word:");
    scanf("%s",&name);
    printf("Revered of word is:%s\n",strrev(name));
    if(*name==*strrev (name))
    {
        printf("Entered word is palindrome");

    }
    else{
        printf("Entered word is not palindrome");
    }
    return 0;
}