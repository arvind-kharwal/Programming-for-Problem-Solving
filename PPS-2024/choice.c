#include <stdio.h>
int main()
{
    int num, pos = 0, neg = 0, zero = 0, ch = 1;
    while (ch)
    {
        printf("\nEnter the integer: ");
        scanf("%d", &num);
        if (num == 0)
            zero++;
        if (num > 0)
            pos++;
        if (num < 0)
            neg++;
        printf("\n\nDo you want to enter another number? '1' for YES and '0' for NO: ");
        scanf("%d", &ch);
    }
    printf("\n\nYou have entered %d positive, %d negative, and %d zero integers.", pos, neg, zero);
    return 0;
}
