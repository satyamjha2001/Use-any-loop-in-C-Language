#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    int max = a > b ? a : b;
    if (max % a == 0 && max % b == 0)
        printf("LCM of %d and %d is: %d", a, b, max);
    else
    {
        for (int i = max; i <= a * b; i += max)
        {
            if (i % a == 0 && i % b == 0)
            {
                printf("LCM of %d and %d is: %d", a, b, i);
                break;
            }
        }
    }
    return 0;
}