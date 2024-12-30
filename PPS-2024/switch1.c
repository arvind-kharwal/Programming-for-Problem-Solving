#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    switch(n)
    {
        case 'a':
            printf("\nI am in Case a");
            break;
        case 'A':
            printf("\nI am in Case A");
            break;
        case 'd':
            printf("\nI am in Case d");
            break;
        case 'x':
            printf("\nI am in Case x");
            break;
        default:
            printf("\nI am in default");
    }
    return(0);
}
