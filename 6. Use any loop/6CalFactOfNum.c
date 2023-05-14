#include<stdio.h>
int main() {
long long int n,fact=1;
printf("Enter a number: ");
scanf("%lld",&n);
for(int i=n;i>1;i--)
fact*=i;
printf("Factorial of %lld is: %lld",n,fact);
return 0;
}