#include<stdio.h>
int main() {
int n,sum=0;
printf("Enter the value of number N: ");
scanf("%d",&n);
for(int i=1;i<=2*n;i+=2)
{   
    sum+=i;
}
printf("\nSum of first %d odd natural number is: %d",n,sum);
return 0;
}