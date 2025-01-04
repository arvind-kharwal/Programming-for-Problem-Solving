#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n, i, *p, s = 0;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    if (p == NULL)
        printf("\nMemory is not available");
    printf("\nEnter the elements in array a: ");
    for (i = 0; i < n; i++)
        scanf("%d", p + i);
    printf("\nThe elements in array a: ");
    for (i = 0; i < n; i++)
        s = s + (*(p + i));
    printf("The sum is %d\t", s);
}