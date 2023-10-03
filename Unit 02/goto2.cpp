#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<5)
        goto next;
    else 
        goto other;
    next:
        printf("Hello");

    other: 
        printf("World");
}
