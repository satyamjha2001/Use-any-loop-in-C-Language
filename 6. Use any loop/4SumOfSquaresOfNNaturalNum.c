#include<stdio.h>
int main() {
int n,s=0,i;
printf("Enter the number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    s+=(i*i);
}
printf("\nSum of squares of first %d natural numbers are: %d",n,s);
return 0;
}