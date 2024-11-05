#include<stdio.h>
int sq(int n);
int main(){
    int n,x;
    printf("Enter a value:");
    scanf("%d",&n);
     x=sq(n);
    printf("Square of a entered number is :%d", x);
    return 0;
}
int sq(int n){

    return n*n;
}





