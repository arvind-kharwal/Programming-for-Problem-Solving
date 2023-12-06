#include <stdio.h>
int large(int[]);
int main()
{
    int r, a[10], i;
    printf("Enter the numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n The numbers are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
    r = large(a);
    printf("\nThe largest number is: %d", r);
}
int large(int a[])
{
    int i, big = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > big)
            big = a[i];
    }
    return (big);
}