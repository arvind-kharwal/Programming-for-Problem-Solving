#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
        count = 1;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 0)
        printf("The number is prime");
    else
        printf("The number is not prime");
    return 0;
}

