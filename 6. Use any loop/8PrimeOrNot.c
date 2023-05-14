#include <stdio.h>
int main()
{
    int n, k = 0;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    if (n <= 1)
        printf("%d is not a prime number", n);
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                k = 1;
                break;
            }
        }
        if (k == 1)
            printf("%d is not a prime number", n);
        else
            printf("%d is a prime number", n);
    }

    return 0;
}