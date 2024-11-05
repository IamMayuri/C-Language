#include<stdio.h>
int main()
    {
        int n;
        printf("Enter a value ");
        scanf("%d",&n);
        int a=0;
        int b=1;
        printf("%d",a);
        do{
            printf("%d\t",b);
            int temp=a+b;
            a=b;
            b=temp;
            b++;
        }
        while(b<n);
        return 0;
    }
