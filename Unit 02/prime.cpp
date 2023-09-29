#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            printf("\nNot Prime Number");
            break;
        }
    }
    if (n == i)
        printf("\nThe Prime");
    return (0);
}