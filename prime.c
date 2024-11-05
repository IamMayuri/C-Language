#include <stdio.h>
#include<math.h>
 int main() {
int n,x=0,i;
printf(" Enter a value: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
    x++;
}
if(x==2){
    printf("Entered number is prime");

}
else{
    printf("not prime");
}

return 0;
 }