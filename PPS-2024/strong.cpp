#include <stdio.h>
int main()
{
    int i, n, num, a, sum =0,fact =1;
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);
    n = num;
    while(num > 0)
    {
        a = num % 10;
        for(i=1; i<=a; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if(sum == n)
    {
        printf("%d is STRONG NUMBER",n);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER",n);
    }

    return 0;
}