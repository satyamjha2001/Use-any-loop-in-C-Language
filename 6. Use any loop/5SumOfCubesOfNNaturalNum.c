#include<stdio.h>
int main() {
int n,s=0,i;
printf("Enter the number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    s+=(i*i*i);
}
printf("Sum of cubes of first %d natural numbers are: %d",n,s);
return 0;
}