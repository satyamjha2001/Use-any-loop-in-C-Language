#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    printf("Your number have %d digits", count);
    return 0;
}